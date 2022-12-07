#include<iostream>
#include<map>
#include<set>
#include<stack>

using namespace std;

int main(){
    int n;
    cin >> n;
    map <string ,set<int> > mp;
    for(int i = 0;i < n;i++){
        string st;
        cin >> st;
        int k;
        cin >> k;
        mp[st].insert(k);
    }
    // mp = {
    //  ("Gaziz") : [ 2 , 6 ,18],
    //  ("Alikhan") : [ 6 ,17]
    // }
    map <string ,set<int> > :: iterator it = mp.begin();
    for(it ; it != mp.end();it++){
        cout << it->first << " ";
        if(it->second.size() >=3){
            cout << "+1" << endl;
        }else{
            cout << "NO BONUS\n";
        }
    }

    return 0;
}

