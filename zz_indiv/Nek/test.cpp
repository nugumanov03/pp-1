#include<iostream>
#include<vector>

using namespace std;

int main(){
    int m;
    cin >> m;
    vector < vector < int > > ans(m);
    for(int j = 0 ; j < m;j++){
        int n;
        cin >> n;
        int time = 1;
        vector <pair <int , int > > v(n);
        for(int i = 0 ;i < n;i++){
            cin >> v[i].first >> v[i].second;
        }
        for(int i = 0;i < v.size();i++){
            if(time >= v[i].first && time <= v[i].second){
                ans[j].push_back(time);
                // cout << time<< " ";
                time++;
            }else{
                ans[j].push_back(0);

            }
        }
    }
    for(int i = 0 ; i < ans.size();i++){
        for(int j = 0 ; j < ans[i].size();j++){
            cout << ans[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}