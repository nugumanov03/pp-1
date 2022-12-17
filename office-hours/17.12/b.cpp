#include<iostream>
#include<cmath>

using namespace std;

bool isPrime(int k){
    if(k%2==0 && k!=2) return false;
    for(int i = 3; i < sqrt(k) ;i+=2){
        if( k %i == 0) return false;
    }
    return true;
}

int main(){
    int n;
    cin >> n;
    for(int i = 2 ; i  < n/2 ;i++){
        if(isPrime(i) && isPrime(n-i) ){
            cout << i << " " << n-i;
            break;
        }
    }
    return 0;
}