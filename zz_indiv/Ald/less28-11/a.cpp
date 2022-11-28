#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main(){
    int n;
    cin >> n;
    vector<int>vt;
    for(int i=0;i<n; i++){
        int k;
        cin >> k;
        vt.push_back(k);
    }
    int x,y;
    cin >> x >> y;
    vt.erase(vt.begin() + x,vt.begin() + y);
    for(int i = 0; i<vt.size(); i++){
        cout << vt[i] << " ";
    }

    return 0;
}