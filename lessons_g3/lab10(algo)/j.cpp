#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;

int main(){
    int n ,m ;
    cin >> n >> m;
    vector <int > vt(n);
    for(int i = 0;i < n;i++){
        cin >> vt[i];
    }
    rotate(vt.begin() , vt.begin() + m , vt.end());
    reverse(vt.begin() , vt.end());
    for(int i= 0;i < vt.size();i++){
        cout << vt[i] << " ";
    }

}