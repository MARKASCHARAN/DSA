#include <iostream>
using namespace std;

int main(){
    int days;
    cout << "Enter the days for exam or non exam : ";
    cin >> days;

    switch(days) {
        case 1 :
            cout << "Exam Day" << endl ;
            break;
        case 0 : 
            cout << "Non Exam Day " << endl ;
            break;
        default:
            cout << "Invalid Option" << endl ;
    }
      

}