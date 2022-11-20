#include<iostream>
#include<cmath>
#include<vector>

using namespace std;

bool isPrime(int n){
    if(n%2 == 0 && n != 2){
        return false;
    }
    for(int i = 3;i < sqrt(n);i+=2){
        if(n%i == 0){
            return false;
        }
    }
    return true;
}

int main(){
    int n;
    cin >> n;
    vector <int> vt;
    for(int i = 0; i < n;i++){
        int k;
        cin >> k;
        vt.push_back(k);
    }
    int a;
    cin >> a;
    // ai 
    int cnt = 0;
    for(int i = 0;i < vt.size();i++){
        if(vt[i] > a && isPrime(vt[i])){
            cnt++;
        }
    }
    cout << cnt;
    return 0;
}