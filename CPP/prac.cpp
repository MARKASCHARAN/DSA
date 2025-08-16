#include <bits/stdc++.h>
#include <list>
using namespace std;

int main(){
    list<string> l = {"a","b", "c","d"};
    list<float> l1 = {1.1, 1.2, 1.3, 1.4};

    l.push_back("e");
    l1.emplace_back(1.5);

    l.push_front("0");
    l1.emplace_front(1);

    for(auto i : l){
        cout << i << " ";
    }
    cout << endl;

    for (auto i :l1){
        cout << i << " ";
    }
    cout << endl;

    l.insert(l.begin(), "A");
    l1.erase(l1.begin());

    for(auto i : l){
        cout << i << " ";
    }
    cout << endl;

    for (auto i :l1){
        cout << i << " ";
    }
    cout << endl;

    cout << l.size() << endl;
    cout << l1.size() << endl;

    l.pop_front();
    l1.pop_back();

    for (auto i : l){
        cout << i << " ";
    }
    cout << endl;

    return 0;
}