#include<iostream>
#include<map>
#include<vector>

using namespace std;

int main(){
    int n;
    cin>> n;
    map<string ,string > mp;
    for(int i = 0; i < n;i++){
        string st;
        cin >> st;
        string st2;
        cin >> st2;
        mp[st] = st2;
    }
    int m;
    cin >> m;
    vector <string> vt;
    for(int i = 0 ; i < m;i++){
        string st , st2;
        cin >> st >> st2;
        if( mp[st] == ""){
            vt.push_back("login error");
            // cout << "login error";
        }else if(mp[st] != st2){
            vt.push_back("password error");
            // cout << "password error";
        }else{
            vt.push_back("correct password");
            // cout << "correct password";
        }
    }
    for(int i = 0; i < vt.size();i++){
        cout << vt[i] << endl;
    }


    return 0;
}