#include<iostream>
#include<algorithm>

using namespace std;

int main(){
    string s;
    cin >> s;
    string st = "";
    sort(s.begin() , s.end());
    for(int i = 0;i < s.size();i++){
        if(s[i] != s[i+1]){
            st+=s[i];
        }
    }
    // st => unikal
    for(int i = 0;i < st.size();i++){
        int cnt = 0;
        for(int j = 0;j < s.size();j++){
            if(st[i] == s[j]){
                cnt++;
            }
        }
        cout <<  st[i]  << ": "<< cnt << endl;
    }

    return 0;
}