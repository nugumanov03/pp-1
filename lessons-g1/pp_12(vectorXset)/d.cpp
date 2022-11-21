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
    int k , a;
    cin >> k >> a;
    vt.insert(vt.begin() + k , a);
    // vt.erase(vt.begin() + k , vt.begin() + x + 1);
    for(int i = 0;i < vt.size();i++){
        cout << vt[i] << " ";
    }

    return 0;
}