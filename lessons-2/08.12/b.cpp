#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

bool comp(vector<int> vt1 , vector<int> vt2){
    if(vt1[2] == vt2[2]){
        if(vt1[1] > vt2[1]){
            return true;
        }return false;
    }
    else if(vt1[2] > vt2[2]){
        return true;
    }else return false;
}

int main(){
    int n;
    cin >> n;
    vector < vector <int> > BgVt;
    for(int i = 0 ; i< n;i++){
        vector <int> vt;
        int m;
        cin >> m;
        for(int j = 0;j < m;j++ ){
            int k;
            cin >> k;
            vt.push_back(k);
        }
        BgVt.push_back(vt);
    }
    // 
    sort( BgVt.begin() , BgVt.end() , comp);

    for(int i = 0; i < BgVt.size();i++){
        for(int j = 0 ;  j < BgVt[i].size();j++){
            cout << BgVt[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}