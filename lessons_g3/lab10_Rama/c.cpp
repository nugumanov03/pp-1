#include<iostream>
#include<map>

using namespace std;

int main(){ 
    map <string , float> mp;
    int n,sum = 0;
    cin>> n;
    for(int i= 0;i < n;i++){
        int k;
        cin >> k;
        for(int j = 0 ;j < k;j++){
            string s;
            cin >> s;
            float x;cin>> x;
            mp[s]+=x;
            sum+=x;
        }
    }
     map <string , float> :: iterator it = mp.begin();
     for(it; it != mp.end();it++){
        it->second = it->second /sum * 100;
        cout << it->first << " " << it->second << "\n";
     }

    return 0;
}