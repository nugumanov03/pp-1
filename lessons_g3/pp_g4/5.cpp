#include<iostream>

using namespace std;

bool isdig(char x){
    if(x >= '0' && x <='9'){
        return true;
    }
    return false;
}

bool checker(string s ,int x){
    int cnt = 0;
    getline(cin , s);  
    for(int i = 0;i < s.size();i++){
        if(isdig(s[i])){
            cnt++;
        }
    }
    if(cnt > x){
        return true;
    }
    return false;
}

int main(){
    string s;
    cin >> s;
    int x;
    cin >> x;
    if(checker(s,x)){
        cout << "YES";
    }else cout << "NO";
}