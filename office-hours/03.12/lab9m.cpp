#include<iostream>
#include<map>
#include<vector>
using namespace std;

int main(){ 
    int n;
    cin >> n;
    map <string , int> mp;
    vector <string> vt;
    for(int i = 0;i < n;i++){
        string st;
        cin >> st;
        if(mp[st] == 0){
            vt.push_back("new user added");
            // cout << "new user added";
        }else{
            vt.push_back("user already exists");
            // cout << "user already exists";
        }
        mp[st]++;
    }for(int i= 0 ; i < vt.size();cout << vt[i] << endl, ++i);
    

    return 0;
}