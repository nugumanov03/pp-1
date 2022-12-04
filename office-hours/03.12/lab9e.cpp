#include<iostream>
#include<map>
using namespace std;

int main(){ 
    int n;
    cin >> n;
    map <string , int> mp;
    for(int i = 0;i < n;i++){
        string st;
        cin >> st;
        mp[st]++;
    }
    map <string , int> :: iterator it = mp.begin();
    int cnt = 0;
    for(it ; it!= mp.end(); it++ ){
        if(it->second == 3){
            cnt++;
        }
    }
    cout << cnt;

    return 0;
}