#include<iostream>
#include<algorithm>
#include<vector>

#define t true
#define f false
#define ll long long

using namespace std;
bool comp(vector<int> a , vector<int> b ){
    int sum1=0,sum2=0;
    for(int i = 0 ; i < a.size(); sum1+=a[i],i++);
    for(int i = 0 ; i < b.size(); sum2+=b[i],i++);
    // if(sum1 == sum2){
    //     if(a.size() > b.size()){
    //         return true;
    //     }else return false;
    // }else{
    //     if(sum1 > sum2){
    //         return true;
    //     }else return false;
    // }
    return (sum1 == sum2) ?  ( (a.size() > b.size()) ? t : f )  :( (sum1>sum2) ? f : t );
}

int main(){
    int n;
    cin>>n;
    vector <vector <int > > vt;
    for(int c = 0 ;c < n;c++){
        int k;
        cin >> k;
        vector <int> vt2(k);
        for(int i = 0;i < k;i++){
            cin >> vt2[i];
        }
        vt.push_back(vt2);
    }
    sort(vt.begin() , vt.end() , comp);
    for(int i = 0; i < vt.size();i++){
        
        for(int j = 0;j < vt[i].size();j++){
            cout << vt[i][j] << " ";
        }
        cout << endl;
    }


}