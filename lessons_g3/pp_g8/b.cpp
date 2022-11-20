#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;

int main(){ 
    int n;
    cin >> n;
    vector <int> vt;
    for(int i = 0;i < n;i++){
        int k;
        cin >> k;
        vt.push_back(k);
    }
    // ai 
    reverse(vt.begin() , vt.end());
    
    for(int i = 0; i < vt.size();i++){
        cout << vt[i] << " ";
    }
    return 0;
}