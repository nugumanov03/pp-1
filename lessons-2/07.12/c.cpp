#include<iostream>
#include<map>

using namespace std;

int main(){
    string s;
    cin >> s;
    map <char , int> mp;
    for(int i = 0; i < s.size();i++){
        mp[s[i]]++;
    }
    map <char , int> :: iterator it = mp.begin();
    int cnt = 0;bool flag = true;
    for(it ; it!= mp.end();it++){
        if(it->second %2 == 1){
            cnt++;
        }

    }
    if(cnt > 1) flag = false;
    if(flag)cout << "ZA WARUDO TOKI WO TOMARE";
    else cout << "JOJO";
    return 0;
}