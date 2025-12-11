#include <iostream>
using namespace std;

int main(){

    int arr[] = { 10, 20, 30, 40, 50};
    int arrSize = sizeof(arr)/sizeof(arr[0]);

    for(int i = 0; i < arrSize; i++){
          cout << arr[i] << " " ;
    }
    cout << endl;


    int a = 0 ;
    int b = arrSize-1 ;

    while(a < b){

        swap(arr[a], arr[b]);
        a++;
        b--;
        

    }

    for(int i = 0; i < arrSize; i++){
          cout << arr[i] << " " ;
    }
    cout << endl;


    return 0;
}