#include<iostream>

using namespace std;

int main(){ 
    string s;
    cin >> s;
    bool flag = true;
    for(int i = 0;i < s.size();i++){
        if(s[i] != s[n-1 - i]){
            flag = false;
        }
    }
    if(flag){
        cout << "YES";
    }else cout << "NO";

    return 0;
}