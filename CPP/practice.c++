#include <iostream>
using namespace std;

int main(){
    int arr[] = {1,4,24,6,89,34,56, 0, -34, -63, 100, -22, 99};
    int arrSize = sizeof(arr)/sizeof(arr[0]);
    

    int tar;
    cout << "ENter the target : " << endl;
    cin >> tar;

    int count = 0;

    for(int i = 0; i < arrSize; i++){
        if(arr[i] < tar) count++;

    }

    cout << count << endl;

    return 0;

}