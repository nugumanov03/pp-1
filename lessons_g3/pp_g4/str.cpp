// string s , char x -> есть ли в строке s ,char x
#include<iostream>

bool checker(string s , char x){
    for(int i = 0; i < s.size();i++){
        if(s[i] == x){
            return true;
        }
    }
    return false;
}

int main(){
    string s;
    cin >> s;
    char x;
    cin >> x;
    
    if(checker(s , x)){
        cout << "YES";
    }else cout << "NO";
}