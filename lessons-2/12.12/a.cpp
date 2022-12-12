#include<iostream>
#include<vector>

using namespace std;

int main(){
    vector <int> v;
    while(true){
        int k;
        cin >> k;
        if(k == 0) break;
        v.push_back(k);
    }

    return 0;
}