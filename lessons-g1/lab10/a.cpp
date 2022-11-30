#include<iostream>
#include<map>
#include<vector>
#include<algorithm>

using namespace std;

int main(){
    int n;
    cin >> n;
    vector <string> vt;
    vector <int> vt2;
    for(int i = 0; i < n;i++){
        string st;
        cin >> st ;
        int k;
        cin >>k;
        vt.push_back(st);
        vt2.push_back(k);
    }
    sort(vt.begin() , vt.end());
    sort(vt2.begin() , vt2.end());
    cout << endl;
    for(int i = 0; i < vt.size();i++){
        cout << vt[i] << " " << vt2[i] << endl;
    }

    return 0;
}