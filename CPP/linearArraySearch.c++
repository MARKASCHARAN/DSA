#include <iostream>
using namespace std;

int main(){
    int arr[] = {100, 34, 6, 2, 9, 0, 10};

    int target;
    cout << "Enter the target value : ";
    cin >> target;

    int arrSize = sizeof(arr)/sizeof(arr[0]);

    bool flag = false;

    for(int i = 0; i < arrSize; i++){
        if(target == arr[i]){
            flag = true;
            break;
        }
    }

    if(flag == true) cout << target << " is in the array." << endl;
    else cout << target << " is not in the array." << endl;

    return 0;
}