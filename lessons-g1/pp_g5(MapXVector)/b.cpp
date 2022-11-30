#include<iostream>
#include<map>
#include<vector>

using namespace std;

int main(){
    int n;
    cin >> n;
    map <string , bool > mp;
    vector <string> vt;
    for(int i = 0 ; i < n;i++){
        string st;
        cin >> st;
        if( mp[st] == false){
            vt.push_back("new user added");
            // cout << "new user added";
        // }else cout << "user already exists";
        }else vt.push_back("user already exists");
        mp[st] = true;
    }
    for(int i = 0;i < vt.size();i++){
        cout << vt[i] << endl;
    }



    return 0;
}