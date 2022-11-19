#include<iostream>

using namespace std;

int main(){
    string s;
    cin >> s;
    string t;
    cin >> t;
    char x;
    cin >> x;
    // ai
    for(int i = 0;i < s.size();i++){
        bool flag = false;
        for(int j = 0;j < t.size();j++){
            if(s[i] == t[j]){
                flag =true;
                break;
            }
        }
        if(flag){
           cout << x;
        }else cout << s[i];
    }
    // cout << s;


    return 0;
}