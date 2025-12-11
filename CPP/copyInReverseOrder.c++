#include<iostream>
using namespace std;

int main(){

    int ar[] = {2, 4, 6 , 8, 10};
    int n = sizeof(ar)/sizeof(ar[0]);

    for(int i = 0; i < n; i++){
        cout << ar[i] << " " ;
    }
    cout << endl;

    int br[n];

    for(int i = 0; i < n; i++){
        br[i] = ar[n-1-i];
    }

    for(int i = 0; i < n; i++){
        cout << br[i] << " ";
    }

    cout << endl;

    return 0;
}