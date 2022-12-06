#include<iostream>
#include<map>

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
    
    string x = "Alikhan" , y = "lala";
    // Alikhan lala
    // x: Alikhan , y : lala

    cout << mp[x];
    cout << mp["asdasdaa"];

    if(mp[x] == ""){
        cout << "login error";
    }else if(mp[x] != y){
        cout << "password error";
    }else{
        cout << "correct password";
    }




    // mp={
    //  {"Alikhan" : "lalala"},
    //  {"Slava" : "kpss"}
    // }
    cout << mp["Alikhan"];

    return 0;
}

