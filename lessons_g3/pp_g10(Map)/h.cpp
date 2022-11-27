#include<iostream>
#include<vector>
#include<algorithm>
#include<set>

using namespace std;

int main(){
    int n;
    cin >> n;
    vector <int > vt(n);
    set <int> ss;

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
                ss.insert(( vt[i] ^ vt[j] ));
            }
        }
    }

    cout << ss.size();


    return 0;
}