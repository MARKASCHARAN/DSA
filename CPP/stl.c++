#include <vector>
#include <iostream>
#include <algorithm>
#include <set>
#include <map>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    vector<int> v = {2,5,2,5,7,43,456,745,0};
    v.push_back(2333);
    sort(v.begin(), v.end());
    for (int i : v){
        cout << i << endl;
    }

    set<int> seta = {3,5,67,7, 4, 4, 5, 5};
    seta.insert(23);
    for (int i : seta){
        cout << i << endl;

    }

    map<string, string> maps;
    maps["name"] = "Sai";
    maps["city"] = "Vadodara";
    maps["age"] = "21";
    cout << " Name is : " << maps["name"] << endl;
    cout << " City is : " << maps["city"] << endl;
    cout << " Age is : " << maps["age"] << endl;

}