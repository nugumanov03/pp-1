#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main(){
    int n;
    cin >> n;
    vector <int > vt(n);
    for(int i = 0;i < n;i++){
        cin >> vt[i];
    }   
    sort(vt.begin() , vt.end());
    int cnt = 0;
    for(int i = 0;i < vt.size();i++){
        for(int j = i+1 ; j < vt.size();j++){
            // pair<int , int> pr;
            // pr.first = ( vt[i] ^ vt[j] ); 
            // pr.second = i+1;
            if( ( vt[i] ^ vt[j] )  <= n){
                cnt++;
            }
        }
    }

    cout << cnt;


    return 0;
}