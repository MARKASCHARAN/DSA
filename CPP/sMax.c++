#include <iostream>
using namespace std;

int main(){
    int arr[] = { -200, 200, 209483, -33663, 2,399, 399, -373, 0, 3000};
    int arrSize = sizeof(arr)/sizeof(arr[0]);

    int mx = INT_MIN;
    int smx = INT_MIN;

    for(int i = 0; i < arrSize; i++){
        if(mx < arr[i]) mx = arr[i];
        if(smx < arr[i] && arr[i] != mx ) smx = arr[i];
    }

    cout << mx << endl;
    cout << smx << endl;
    return 0;
}