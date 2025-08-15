// #include <iostream>
// using namespace std;

// int add(int a, int b){
//    return a + b;
// }

// int sub(int a, int b){
//    return a - b;
// }

// int main(){
//     cout << "Enter the X : ";
//     int x;
//     cin >> x;

//     cout << "Enter the Y : ";
//     int y;
//     cin >> y;

//     cout << add(x, y) << endl;
//     cout << sub(x, y) << endl;

//     return 0;
// }


#include <iostream>
using namespace std;

void greet(string name = "Guest"){
    cout << " Hello, Hi " << name << endl;
}

int main(){


    greet();

}