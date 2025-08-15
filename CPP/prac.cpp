#include <bits/stdc++.h>
using namespace std;

int main(){

    vector<int> v1;
    v1.push_back(1);
    v1.emplace_back(2);
    v1.push_back(3);

    vector<int>:: iterator i = v1.begin();
    
    i++;
    cout << *i << endl;
    cout << v1[0] << endl;
    cout << v1.back() << endl;

    for(vector<int>:: iterator i = v1.begin(); i != v1.end(); i++){
        cout << *i << " ";
    }
    cout << endl;

return 0;
}