#include <iostream>
using namespace std;

int add(int a, int b){
   return a + b;
}

int sub(int a, int b){
   return a - b;
}

int main(){
    cout << "Enter the X : ";
    int x;
    cin >> x;

    cout << "Enter the Y : ";
    int y;
    cin >> y;

    cout << add(x, y) << endl;
    cout << sub(x, y) << endl;

    return 0;
}


#include <iostream>
using namespace std;

void greet(string name = "Guest"){
    cout << " Hello, Hi " << name << endl;
}

int main(){


    greet();

}


Types of Functions:
1. Void Funs
2. Return Funs
3. Parameterised
4. Non-Parameterised


void doSomthing(int number){
   cout << number << endl;
   number = number + 5;
   cout << number << endl;
   number = number + 5;
   cout << number << endl;
   number = number + 5;
   cout << number << endl;
   number = number +5;
   cout << number << endl;
   number = number + 5;
   cout << number << endl;
   number = number + 5;
   cout << number << endl;

}

int main(){
    int num = 5;

    doSomthing(num);
    cout << num << endl;

    return 0;
}


void doSomthing(){
    


}


int main(){
    int arr[4];

    for(int i = 0; i < 4; i++){
        cin >> arr[i];
    }

    for(int i = 0; i < 4; i++){
            cout << arr[i] << endl ;
    }

    return 0;
}