#include <bits/stdc++.h>
using namespace std;

// pairs :

// int main(){

//     pair<int, int> p1 = {1, 2};
//     cout << p1.second << endl << p1.first << endl;

//     pair<int, string> p2 = {1, "Age"};
//     cout << p2.first << endl << p2.second << endl;

//     pair<int, pair<int, string>> p3 = {1, {01, "Age"}};
//     cout << p3.first << endl << p3.second.second << endl << p3.second.first << endl;

//     pair<int, int> arr[] = {{1,2}, {7,3}, {9,2}};
//     cout << arr[1].second << endl;

//     return 0;
// }

// vectors :

int main(){

    vector<int> v1;
    v1.push_back(10);
    v1.push_back(100);
    v1.push_back(1000);
    
    vector<int>::iterator i = v1.begin();
    i++;
    cout << *i << " " << endl;
    cout << v1[1] << endl;

    cout << v1.back() << endl;

    for(vector<int>:: iterator i = v1.begin(); i != v1.end(); i++ ) {
        cout << *i << " ";
    }
    cout << endl;

    for(auto i = v1.begin(); i != v1.end(); i++){
        cout << *i << " ";
    }
    cout << endl;

    for(auto i : v1){
        cout << i << " ";
    }
    cout << endl;



    v1.erase(v1.begin()+2);
    for(auto i : v1){
        cout << i << " ";

    }
    cout << endl;
    

    return 0;
}