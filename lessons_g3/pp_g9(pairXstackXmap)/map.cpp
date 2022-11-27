#include<iostream>
#include<queue>
#include<map>

using namespace std;

int main(){
    int n;
    cin >> n;
    map <string , int> mp;
    for(int i = 0;i < n;i++){
        string st;
        cin >> st;
        if(mp[st] == 0){
            mp[st] = i+1;
        }
    }
    queue <int> q;
    q.front();
    q.pop()
    map <string , int> :: iterator it = mp.begin();
    cout << "My output :\n";
    for(it; it!= mp.end() ; it++){
        cout << it->first << " " << it->second << endl;
    }


    return 0;
}