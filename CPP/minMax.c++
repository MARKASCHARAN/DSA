#include <iostream>
using namespace std;

int main(){
    int arr[] = {170, 2, 4, 22, 70, 50, 39, 0};

    int mx = INT_MIN;
    int mn = INT_MAX;
    int arrSize = sizeof(arr)/sizeof(arr[0]);

    for(int i = 0; i < arrSize; i++){
        mx = max(mx,arr[i]);
        mn = min(mn,arr[i]);
    }


    cout << mx << endl;
    cout << mn << endl;


    return 0;
}