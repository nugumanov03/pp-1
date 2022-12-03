#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;

bool inc(int a , int b){
    if(a > b){
        return true;
    }else{
        return false;
    }
}

int main(){
    int n;
    cin>>n;
    vector <int> vt(n);
    for(int i = 0 ; i < n;i++){
        cin >> vt[i];
    }
    sort(vt.begin() , vt.end() , inc);
    for(int i = 0 ; i < n;i++){
        cout << vt[i] << " ";
    }
    return 0;
}