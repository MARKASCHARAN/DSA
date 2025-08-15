// sudoku.cpp
// Simple console Sudoku generator + playable game
// Compile: g++ -std=c++17 sudoku.cpp -O2 -o sudoku
// Run: ./sudoku

#include <bits/stdc++.h>

using namespace std;

static std::mt19937 rng((unsigned)chrono::high_resolution_clock::now().time_since_epoch().count());

const int N = 9;

// Utility: print board
void printBoard(const array<array<int,N>,N>& board) {
    cout << "   ";
    for (int c = 0; c < N; ++c) {
        cout << c+1 << (c%3==2 ? "  " : " ");
    }
    cout << "\n";
    for (int r = 0; r < N; ++r) {
        cout << r+1 << "  ";
        for (int c = 0; c < N; ++c) {
            if (board[r][c] == 0) cout << ".";
            else cout << board[r][c];
            if (c % 3 == 2) cout << "  ";
            else cout << " ";
        }
        cout << "\n";
        if (r % 3 == 2) cout << "\n";
    }
}

// Check if num can be placed at (row, col) on board
bool isSafe(const array<array<int,N>,N>& board, int row, int col, int num) {
    for (int x = 0; x < N; ++x) {
        if (board[row][x] == num) return false;
        if (board[x][col] == num) return false;
    }
    int sr = row - row%3, sc = col - col%3;
    for (int r = 0; r < 3; ++r)
        for (int c = 0; c < 3; ++c)
            if (board[sr+r][sc+c] == num) return false;
    return true;
}

// Backtracking solver (used for both solving and validating uniqueness)
bool solveSudoku(array<array<int,N>,N>& board) {
    for (int r = 0; r < N; ++r)
        for (int c = 0; c < N; ++c)
            if (board[r][c] == 0) {
                for (int num = 1; num <= 9; ++num) {
                    if (isSafe(board, r, c, num)) {
                        board[r][c] = num;
                        if (solveSudoku(board)) return true;
                        board[r][c] = 0;
                    }
                }
                return false;
            }
    return true;
}

// Count number of solutions (with early exit >1)
int countSolutions(array<array<int,N>,N>& board, int limit = 2) {
    for (int r = 0; r < N; ++r)
        for (int c = 0; c < N; ++c)
            if (board[r][c] == 0) {
                int count = 0;
                for (int num=1; num<=9; ++num) {
                    if (isSafe(board, r, c, num)) {
                        board[r][c] = num;
                        count += countSolutions(board, limit - count);
                        board[r][c] = 0;
                        if (count >= limit) return count;
                    }
                }
                return count;
            }
    return 1; // filled => 1 solution found
}

// Generate a fully filled valid board using randomized backtracking
bool fillBoard(array<array<int,N>,N>& board) {
    for (int r = 0; r < N; ++r) for (int c = 0; c < N; ++c) board[r][c] = 0;
    vector<int> nums(9);
    iota(nums.begin(), nums.end(), 1);

    function<bool(int,int)> fill = [&](int row, int col)->bool {
        if (row == N) return true;
        int nr = (col == N-1) ? row+1 : row;
        int nc = (col == N-1) ? 0 : col+1;

        shuffle(nums.begin(), nums.end(), rng);
        for (int v : nums) {
            if (isSafe(board, row, col, v)) {
                board[row][col] = v;
                if (fill(nr, nc)) return true;
                board[row][col] = 0;
            }
        }
        return false;
    };

    return fill(0,0);
}

// Remove k digits while trying to keep a unique solution
void removeDigits(array<array<int,N>,N>& board, int removed) {
    vector<pair<int,int>> cells;
    for (int r=0;r<N;++r) for (int c=0;c<N;++c) cells.emplace_back(r,c);
    shuffle(cells.begin(), cells.end(), rng);

    for (auto [r,c] : cells) {
        if (removed <= 0) break;
        int backup = board[r][c];
        board[r][c] = 0;

        array<array<int,N>,N> copyBoard = board;
        int solCount = countSolutions(copyBoard, 2);
        if (solCount != 1) {
            // revert if not unique
            board[r][c] = backup;
        } else {
            --removed;
        }
    }
}

// Helper: create puzzle at difficulty (easy/medium/hard)
array<array<int,N>,N> generatePuzzle(const string& difficulty) {
    array<array<int,N>,N> full;
    if (!fillBoard(full)) {
        throw runtime_error("Failed to generate full board.");
    }
    array<array<int,N>,N> puzzle = full;

    int toRemove = 40; // default medium
    if (difficulty == "easy") toRemove = 30;
    else if (difficulty == "hard") toRemove = 50;
    // Note: removeDigits tries to keep uniqueness but may not always remove exactly toRemove if uniqueness would break.
    removeDigits(puzzle, toRemove);
    return puzzle;
}

bool boardsEqual(const array<array<int,N>,N>& a, const array<array<int,N>,N>& b) {
    for (int r=0;r<N;++r) for (int c=0;c<N;++c) if (a[r][c]!=b[r][c]) return false;
    return true;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    cout << "=== Sudoku Console Game ===\n";
    cout << "Choose difficulty: (1) easy (2) medium (3) hard\n";
    int d; cin >> d;
    string diff = (d==1) ? "easy" : (d==3) ? "hard" : "medium";

    auto puzzle = generatePuzzle(diff);
    // Keep a copy of solution by solving puzzle; because removeDigits left unique solution we can reconstruct
    array<array<int,N>,N> solution = puzzle;
    if (!solveSudoku(solution)) {
        // fallback: regenerate until solvable
        do {
            puzzle = generatePuzzle(diff);
            solution = puzzle;
        } while(!solveSudoku(solution));
    }

    array<array<int,N>,N> player = puzzle;

    cout << "\nCommands:\n";
    cout << "  set r c v   -> put value v at row r col c (1-based). v=0 clears cell\n";
    cout << "  show        -> print board\n";
    cout << "  solve       -> reveal solution and exit\n";
    cout << "  check       -> check if you solved the puzzle\n";
    cout << "  quit        -> exit\n\n";

    printBoard(player);

    string cmd;
    while (true) {
        cout << "> ";
        if (!(cin >> cmd)) break;
        if (cmd == "show") {
            printBoard(player);
        } else if (cmd == "set") {
            int r,c,v; cin >> r >> c >> v;
            if (r<1||r>9||c<1||c>9||v<0||v>9) {
                cout << "Invalid input. rows/cols 1-9, value 0-9.\n";
                continue;
            }
            // only allow changes to originally empty cells
            if (puzzle[r-1][c-1] != 0 && v != 0) {
                cout << "Can't change a given/clue cell. To clear use v=0.\n";
                continue;
            }
            if (v != 0 && !isSafe(player, r-1, c-1, v)) {
                cout << "That move conflicts with existing numbers.\n";
                continue;
            }
            player[r-1][c-1] = v;
            printBoard(player);
        } else if (cmd == "solve") {
            cout << "Solution:\n";
            printBoard(solution);
            cout << "Bye!\n";
            break;
        } else if (cmd == "check") {
            if (boardsEqual(player, solution)) {
                cout << "Congratulations! Puzzle solved correctly.\n";
                break;
            } else {
                cout << "Not solved yet or some numbers are wrong.\n";
            }
        } else if (cmd == "quit") {
            cout << "Goodbye.\n";
            break;
        } else {
            cout << "Unknown command. Use set/show/solve/check/quit\n";
        }
    }

    return 0;
}
