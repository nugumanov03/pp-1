#include<iostream>
#include<vector>

using namespace std;

bool isPrime(int n){
    if(n <= 1){
        return false;
    }
    for(int i = 2; i < n ;i++){
        if(n %i == 0){
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
    int k;
    cin >> k;
    int cnt = 0;
    for(int i = 0;i < vt.size();i++){
        if(vt[i] >= k && isPrime(vt[i])){
            cnt++;
        }
    }
    cout << cnt;

    return 0;
}