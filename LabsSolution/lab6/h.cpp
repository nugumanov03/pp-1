#include<iostream>

using namespace std;

bool check(int n){
    while(n>0){
        int k = n%10;
        if(k%2==1){
            return false;
        }
        n/=10;
    }
    return true;
}

int main(){
    int n;
    cin >> n;
    if(check(n)){
        cout << "Valid";
    }else cout << "Not valid";

    return 0;
}