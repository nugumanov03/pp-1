#include<iostream>
#include<vector>
#include<set>

using namespace std;

int main(){
    int n;
    cin >> n;
    vector <string> vt(n);
    set <string> ss;
    for(int i = 0;i < n;i++){
        cin >> vt[i]; 
        ss.insert(vt[i]);
    }
    set <string> :: iterator it = ss.begin();
    int glob_cnt = 0;
    for(;it!= ss.end() ;it++){
        int cnt = 0;
        for(int i = 0; i < vt.size();i++){
            if( *it == vt[i]){
                cnt++;
            }
            if(cnt > 1){
                glob_cnt++;
                break;
            }
        }
        // cout << *it << " ";
    }
    cout << glob_cnt;

    return 0;
}