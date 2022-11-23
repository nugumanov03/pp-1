#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main(){
    int n;
    cin >> n;
    vector <pair<int,int>> vt(n);
    for(int i = 0; i < n;i++){
        cin >> vt[i].first >> vt[i].second;
    }    
    sort(vt.begin() , vt.end());
    for(int i = 0;i < vt.size();i++){
        cout << vt[i].first << " " << vt[i].second << endl;
    }
    return 0;
}