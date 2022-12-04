#include<bits/stdc++.h>

using namespace std;

bool isPal(string s){
    string k = s;
    reverse(k.begin() , k.end());
    if( k == s) return true;
    return false;
}
int main(){
    int n;
    cin >> n;
    vector <int> vt;
    for(int i = 0; i < n;i++){
        cin >> vt[i];
    }
    map <char , int> mp;
    for(int i = 0; i < vt.size();i++){
        mp[vt[i]]++;
    }
    vector <int> vv;
    map <char , int> :: iterator it = mp.begin();
    for(it ; it != mp.end() ;it++){
        // for(int i = 0; i < it->second ;i++){
        cout << it->first << " ";
        // }
    }

    return 0;
}