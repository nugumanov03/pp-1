#include<iostream>
#include<map>
#include<vector>
#include<algorithm>

using namespace std;

int main(){
    int n;
    cin >> n;
    vector <pair <int , int> > vt;
    for(int i =0 ;i < n;i++){
        pair <int , int> pr;
        cin >> pr.first >> pr.second;       
        // pr = <x , y>
        vt.push_back(pr);
    }
    sort(vt.begin() , vt.end());
    for(int i = 0; i < vt.size();i++){
        cout << vt[i].first << " " << vt[i].second << endl; 
    }

    return 0;
}