#include<iostream>

using namespace std;

int main(){ 
    string s;
    cin >> s;
    string t;
    cin >> t;
    for(int i = 0; i < s.size();i++){
        int cnt = 0,flag = false;
        for(int j = 0;j < t.size();j++){
            if(s[i+j] == t[j]){
                cnt++;
            }
            if(cnt == t.size()){
                flag = true;
            }
        }
        if(flag) cout << i<< " ";
    }
    return 0;
}