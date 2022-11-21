#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main(){
    vector <int> vt;
    int n;
    cin >> n;
    for(int i = 0; i < n;i++){
        int x;
        cin >> x;
        vt.push_back(x);
        // cin >> vt[i];    
    }
    // 
    sort(vt.begin() , vt.end());
    for(int i = 0;i < vt.size();i++){
        cout << vt[i];
    }

    return 0;
}