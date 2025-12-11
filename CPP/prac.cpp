#include <iostream>
using namespace std;

int main(){

    vector<int> v1 = {1, 2, 84, 92, 13, 99, 22, 43};
    int n = v1.size();

    vector<int> v2(2);
    
    bool flag = false;

    for(int i = 0; i < n; i++){
        for(int j = i + 1; j < n; j++){
            if(v1[i] == v1[j]) {
                v2[0] = v1[i];
                v2[1] = v1[j];

                flag = true;
            } 
        }

        
    }

    cout << 

    

    return 0;
}