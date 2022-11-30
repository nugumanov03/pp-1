#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

bool comp(vector<int> vt1, vector<int> vt2){
    int sum1 = 0;
    for(int i = 0;i < vt1.size();i++){
        sum1+= vt1[i];
    }
    int sum2 = 0;
    for(int i = 0;i < vt2.size();i++){
        sum2+= vt2[i];
    }
    // cout << sum1 << " " << sum2 << endl;
    if(sum1 == sum2){
        
        if(vt1.size() > vt2.size()){
            return true;
        }else return false;
    }else if(sum1 > sum2)return false;

    return true;
}


int main(){
    int n;
    cin >> n;
    vector < vector <int> > vt;
    for(int i = 0; i < n;i++){
        int k;
        cin >> k;
        vector <int> vrow(k);
        for(int j = 0; j < k;j++){
            cin >> vrow[j];
        }
        vt.push_back(vrow);
    }
    sort(vt.begin() , vt.end() , comp);

    for(int i = 0; i < vt.size();i++){
        
        for(int j = 0;j < vt[i].size();j++ ){
            cout << vt[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}