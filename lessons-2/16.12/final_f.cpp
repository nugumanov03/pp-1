// asdsad @ asdasd . asdasd
#include<iostream>

using namespace std;

bool isLow(char a){
    if( a <= 'z' && a>= 'a') return true;
    return false;
}

int main(){
    string s;
    cin >> s;
    bool flag = false;
    string str , str2;
    for(int i = 0; i < s.size();i++){
        if(flag) str += s[i];
        if(flag && (!isLow(s[i]) && s[i] != '.')){
            cout << "NO";
            return 0;
        } 
        if(s[i] == '@'){
            flag = true;
            if(s[i+1] == '.') flag = false;
        }
    }
    flag = false;
    if(str.size() > 0){
        for(int i = 0; i < str.size();i++){
            if(flag) str2+=str[i];
            if(flag && !isLow(str[i])){
                cout << "NO 2";
                return 0;
            } 
            if(str[i] == '.'){
                flag = true;
            }
            
           
        }
    }
    if(str2.size() == 0) flag = false;
    else flag = true; 
    if(flag ) cout << "YES";
    else cout << "NO";

    return 0;
}