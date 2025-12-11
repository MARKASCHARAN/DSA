#include <iostream>
#include <vector>
using namespace std;

int main(){

    vector<int> v1 = { 23, 0, 34, 23, 1};
    int n = v1.size();
    vector<int> v2(2);

    for(int i = 0; i < n; i++){
        for(int j = i+1; j < n; j++){
            if(v1[i] == v1[j]) {
                v2[0] = v1[i];
                v2[1] = v1[j];

                cout << v2[0] << " " << v2[1] << endl;
                return 0;
            }
        }       
    }
        

    return 0;
}