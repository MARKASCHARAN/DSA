#include <iostream>
using namespace std;

int main(){
    int arr[] = {2, 4,6,7,9,100, 32, 0, -2, -22};
    int arrSize = sizeof(arr)/sizeof(arr[0]);

    int element;
    cout << " Emter the Element : ";
    cin >> element;

    int count = 0;

    for(int i = 0; i < arrSize; i++){
        if(arr[i] > element) count++;
    }

    cout << count << endl;

    return 0;

}