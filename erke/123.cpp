#include<iostream>
#include<map>
#include<vector>

using namespace std;

int main(){
    int n;
    cin >> n;
    map <string , string> mp;
    for(int i = 0; i < n;i++){
        string log , pass;
        cin >> log >> pass;
        mp[log] = pass;
    }
    // mp["Alikhan"] = "lalala"; :: первая итерация
    // mp["Slava"] = "kpss"; :: вторая итерация 
    
    // string v[i] = "Alikhan" , y = "lala";
    // Alikhan lala
    // x: Alikhan , y : lala

    // cout << mp[x];
    // cout << mp["asdasdaa"];
    int f; cin >> f;
    vector < pair < string, string > > v;

    for (int i = 0; i < f; i++){
        string l, d;
        cin >> l >> d;
        v.push_back(make_pair(l , d));
    }
    
    for (int i = 0; i < v.size(); i++){
    
    if(mp[v[i].first] == ""){
        cout << "login error\n";
    }else if(mp[v[i].first] != v[i].second){
        cout << "password error\n";
    }else{
        cout << "correct password\n";
    }

    }


    // mp={
    //  {"Alikhan" : "lalala"},
    //  {"Slava" : "kpss"}
    // }
    // cout << mp["Alikhan"];

    return 0;
}

