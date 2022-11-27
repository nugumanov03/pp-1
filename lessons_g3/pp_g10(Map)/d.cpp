#include<iostream>
#include<map>

using namespace std;

int main(){
    int n;
    cin >> n;
    map <string , int> mp;
    for(int i = 0; i < n;i++){
        string st;
        cin >> st; // "abc" , abc
        int x;
        cin >> x; // 12 // 30
        mp[st] += x; // mp[abc]= mp[abc] + 30 = > 42
    }   
    // mp = {st1 : x1;st2 : x2; st3 = st2 -> st2 : x2 + x3; }
    map <string , int> :: iterator it = mp.begin();
    for( it ; it!= mp.end();it++){
        cout << it->first <<" " << it->second<< "\n";
    }

    return 0;
}