#include <bits/stdc++.h>
using namespace std;

void ptr1(int n){

    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            cout << "* ";
        }
        cout << endl;
    }
}

void ptr2(int n){

    for (int i = 0; i < n; i++){
        for (int j = 0; j <= i; j++){
            cout << "* ";
        }
        cout << endl;
    }
}

void ptr3(int n){

    for (int i = 1; i <= n; i++){
        for(int j = 1; j <= i; j++){
            cout << j << " ";
        }
        cout << endl;
    }

}

void ptr4(int n){

    for (int i = 1; i <= n; i++){
        for(int j = 1; j <= i; j++){
            cout << i << " ";
        }
        cout << endl;
    }

}

void ptr5(int n){

    for (int i = 1  ; i <= n; i++){
        for(int j = 0; j < n-i+1; j++){
            cout << "* ";
        }
        cout << endl;
    }

}

void ptr6(int n){

    for (int i = 1  ; i <= n; i++){
        for(int j = 1; j <= n-i+1; j++){
            cout << j << " ";
        }
        cout << endl;
    }

}

void ptr7(int n){
    for (int i = 0; i < n; i++){
       for(int j = 0; j < n-i-1; j++) cout << " ";
       for(int j = 0; j < 2*i+1; j++) cout << "*";
       for(int j = 0; j < n-i-1; j++) cout << " ";
    cout << endl;
    }
}

void ptr8(int n){

    for (int i = 0; i < n; i++){
       for(int j = 0; j < i; j++) cout << " ";
       for(int j = 0; j < 2 * n - ( 2*i + 1); j++) cout << "*";
       for(int j = 0; j < i; j++) cout << " ";
    cout << endl;
    }
}

void ptr10(int n){

    for (int i = i; i <= 2*n-1; i++){
        int stars = i;
        if(i > n) stars = 2*n - i ;
        for(int j = 1; j <= stars; j++ ){
           cout << "*";
        }
    cout << endl;
    }
}

void ptr11(int n){
    int start = 1;
    for (int i = 0; i < n; i++){
        
        if(i % 2 == 0) start = 1;
        else start = 0;
        for (int j = 0; j <= i; j++ ){
            cout << start;
            start = 1 - start;
        }
   cout << endl;
    }
}



int main(){

    cout << " Enter test case : ";
    int t;
    cin >> t;

    for (int i = 0; i < t; i++){
    cout << "Enter N : ";
    int n;
    cin >> n;
    ptr11(n);
    
    }
}