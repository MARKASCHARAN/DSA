#include <iostream>
using namespace std;

int main(){
    int arr[] = {2, 4, 40, 23, 49, 10000, -100, -2874, 3535535};
    int arrSize = sizeof(arr)/ sizeof(arr[0]);

    int mx = INT_MIN;
    int mn = INT_MAX;

    for(int i = 0; i < arrSize; i++){
        if(mx < arr[i]) mx = arr[i];
        if(mn > arr[i]) mn = arr[i];

    }

    cout << mx << endl;
    cout << mn << endl;

    return 0;
}