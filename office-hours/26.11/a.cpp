#include<iostream>
#include<map>
#include<vector>
// 64
// 25
// 16

using namespace std;

int main(){ 
    int n;
    cin >> n;
    map <string , bool> mp;
    vector <string> vt;
    for(int i = 0; i < n;i++){
        string st;
        cin >> st;
        if(mp[st] == false){
            vt.push_back("new user added\n");
            // cout << "new user added\n";
            mp[st] = true;
        }else{
            vt.push_back("user already exists\n");
            // cout << "user already exists\n";
        }
    }
    for(int i = 0;i < vt.size();i++){
        cout << vt[i]; 
    }
    return 0;
}