#include <iostream>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int x = 10;
    int* p = &x;

    *p = 20;

    cout << x << endl;
    cout << p << endl;

    int y = 10;
    cout << y << endl;

    int &Y = y;
    cout << Y << endl;

    Y = 29248;
    cout << Y << endl;

}