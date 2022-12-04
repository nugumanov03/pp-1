#include<iostream>
#include<map>
#include<vector>

using namespace std;

int main(){
    int n;
    cin >> n;
    map <int , int> mp;
    for(int i = 0 ; i < n;i++){
        int k;
        cin >> k;
        mp[k]++;
    }
    int cnt = 0;
    map <int , int> :: iterator it = mp.begin();
    for(it ; it != mp.end();it++){
        cout << it->first << " " << it->second << endl;
        if(it->second >= 2){
            cnt++;
        }
    }
    cout << cnt;
    return 0;
}
