#include<iostream>
#include<vector>

using namespace std;

int main(){
    int n;
    cin >> n;
    vector <int> vt;
    // 4
    // 12 45 70 900
    for(int i = 0; i < n;i++){
        int b;
        cin >> b;
        vt.push_back(b);
    }
    // cout << vt[3]
    // 900
    // cout << vt.size(); // 8

    for(int i = 0;i < vt.size();i++){
        cout << vt[i] << " ";
    }
    sort(vt.begin(), vt.end());
    return 0;
}