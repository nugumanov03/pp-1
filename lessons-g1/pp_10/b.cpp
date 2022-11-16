#include<iostream>

using namespace std;

bool isPal(string s){
    for(int i = 0; i < s.size()/2;i++){
        if(s[i] != s[s.size()-1 -i]){
            return false;
        }
    }
    return true;
}

int main(){
    string s;
    cin >> s;
    int cnt = 0;
    for(int i = 0;i < s.size() - 1;i++){
        if(s[i] == s[i+1]){
            cnt++;
        }
    }
    if(cnt == s.size() -1 ){
        cout << 0;
        return 0;
    }
    while(isPal(s)){
        s.erase(s.size()-1 , 1);  
    }
    cout << s.size();
    return 0;
}