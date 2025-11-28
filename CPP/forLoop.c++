#include <iostream>
using namespace std;

int main(){
    
    int i ;

    for(i = 1 ; i <= 5; i++){

        cout << i << endl;

        if( i % 2 ==  0 ){
         cout << "Marka S Charan, " << i << endl ;
        } else {
            cout << "Rest is odd " << endl;
        }

        cout << i << endl;
    }

    return 0;

}