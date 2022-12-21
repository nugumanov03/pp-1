#include<iostream>

using namespace std;
char toLower(char c){
    if(c >= 'A' && c <= 'Z'){
        c +=32;
    }
    return c;
}

int main(){
    string s , t;
    cin >> s >> t;
    int status = 0;
    for(int i = 0 ; i < s.size();i++){
        if(toLower(s[i]) == toLower(t[i])){
            continue;
        }else if(toLower(s[i]) > toLower(t[i])){
            status  = 1;
        }else{
            status = -1;
        }
    }
    cout << status;
    return 0;
    // abaaaaa
    // aazzzzz
}