#include <bits/stdc++.h>
using namespace std;

int main(){

    
    string s = "Helloo";
    cout << s << endl;
    int lenOffString = s.size();
    cout << "Last Elememt in String is : " << s[lenOffString - 1] << endl;
    s[lenOffString - 1] = 's';
    cout << "Updated last Elemnt in the string : " << s[lenOffString - 1] << endl;


    cout << "Fisrt Element is : " << s[0] << endl ;
     cout << s << endl;
return 0;

}