#include<iostream>
#include<set>
#include<vector>
#include<algorithm>
#include<unordered_set>

using namespace std;

int main(){
    // unordered_set <int> s1;
    // unordered_set <int> s2;
    vector <int> vt1;
    vector <int> vt2;
    int n,m;
    cin >> n >> m;
    for(int i =0 ;i < n;i++){
        int k;
        cin >> k;
        // s1.insert(k);
        vt1.push_back(k);
    }
    vt1.erase(unique(vt1.begin(), vt1.end()), vt1.end());

    for(int i =0 ;i < m;i++){
        int k;
        cin >> k;
        // s2.insert(k);
        vt2.push_back(k);
    }
    vt2.erase( unique(vt2.begin(), vt2.end()), vt2.end());

    vector <int>  vt;
    for(int i = 0 , k =0;i < vt1.size() || k < vt2.size();){
        if ( i < vt1.size()){
            vt.push_back(vt1[i]);
            i++;
        }
        if( k < vt2.size()){
            vt.push_back(vt2[k]);
            k++;
        }
    }
    vt.erase(unique(vt.begin(), vt.end()), vt.end());
    for(int i = 0; i < vt.size() ;i++){
        cout << vt[i] << " ";
    }
}
