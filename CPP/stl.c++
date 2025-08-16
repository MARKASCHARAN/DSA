#include <bits/stdc++.h>
#include <list>
#include <stack>
using namespace std;


pair :

int main(){

    pair<int, int> p1 = {1, 2};
    cout << p1.second << endl << p1.first << endl;

    pair<int, string> p2 = {1, "Age"};
    cout << p2.first << endl << p2.second << endl;

    pair<int, pair<int, string>> p3 = {1, {01, "Age"}};
    cout << p3.first << endl << p3.second.second << endl << p3.second.first << endl;

    pair<int, int> arr[] = {{1,2}, {7,3}, {9,2}};
    cout << arr[1].second << endl;

    return 0;
}




vectors :

int main(){

    vector<int> v1;
    v1.push_back(10);
    v1.push_back(100);
    v1.push_back(1000);
    v1.push_back(10000);
    v1.push_back(100000);
    
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


    v1.erase(v1.begin());
    for(auto i : v1){
        cout << i << " ";

    }
    cout << endl;

     v1.erase(v1.begin() +2, v1.begin()+3);
   for (auto i : v1){
    cout << i << " ";
   }
   cout << endl;

v1.insert(v1.begin(), 1);
v1.insert(v1.begin()+1, 1,2);
for(auto i : v1){
    cout << i << " ";
}
cout << endl;

vector<int> v2 = {1,1,1};
v1.insert(v1.end(), v2.begin(), v2.end());
for (auto i : v1){
    cout << i << " ";
}
cout << endl;
cout << v2.size() << endl;
v2.pop_back();
for(auto i : v2){
    cout << i << " ";
}
cout << endl;

v1.swap(v2);

for (auto i : v2){
    cout << i << " ";
}
cout << endl;
v2.clear();
cout << v2.empty() << endl;
    

    return 0;
}





list :

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





deque :

int main(){
    deque<int> dq ={ 1, 2, 3, 4};

    dq.push_back(5);
    dq.push_front(0);
    dq.emplace_back(6);
    dq.emplace_front(-1);
    dq.pop_back();
    dq.pop_front();

    for(auto i = dq.begin(); i != dq.end(); i++){
        cout << *i << " ";
    }
    cout << endl;

    dq.insert(dq.begin(), -2 );

    for (auto i = dq.begin(); i != dq.end(); i++ ){
        cout << *i << " ";
    }
    cout << endl;

    cout << dq.size() << endl;
    dq.clear();
    cout << dq.empty() << endl;

    
    return 0;
}




stack :

int main(){
    stack<int> st;
    st.push(0);
    st.push(1);
    st.push(2);
    st.push(3);
    st.pop();
    cout << st.top() << endl;
    cout << st.size() << endl;
    cout << st.empty() << endl;


    return 0;
}