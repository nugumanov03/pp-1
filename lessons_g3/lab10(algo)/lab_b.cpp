#include<iostream>
#include<algorithm>
#include<vector>
#include<cmath>

#define ll long long
using namespace std;

int x = -1;
ll gen(){
    x++;
    ll ans = 1;
    for(int i = 0; i <x ;i++){
        ans*=x;
    }
    return ans;
}
int main(){
    int n;
    cin >> n;
    vector <ll> vt(n+1);
    generate(vt.begin(),vt.end() , gen);
    for(int i = 0;i < vt.size();i++){
        cout << vt[i] << " ";
    }
    return 0;
}