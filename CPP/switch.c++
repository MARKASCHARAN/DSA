#include <iostream>
using namespace std;

int main(){
    int age;
    cout << "Enter the Age : ";
    cin >> age;

    switch(age){
        case 0 :
           cout << "You can't vote" << endl;
           break;
        case 1 : 
           cout << "You can vote" << endl;
           break;
        default :
           cout << "Enter the valid option 0 or 1" << endl;
        
             
    }

    return 0;
}