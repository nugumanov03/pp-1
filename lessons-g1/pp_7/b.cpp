#include<iostream>

using namespace std;

bool isPrime(int n){
    for(int i = 2; i < n;i++){
        if(n%i == 0){
            return false;
        }
    }
    return true;
}

int sum_of_primes(int n, int *a){
    int sum = 0;
    for(int i = 0;i < n;i++){
        if(isPrime(a[i]) == true ){ // 5 10 27 19 17
            sum+=a[i];
        }
    }
    return sum;
}

int max(int a,int b){
    if(a > b){
        return a;
    }else return b;
}
int main(){
    int n;
    cin >> n;
    int a[n];
    for(int i = 0;i < n;i++){
        cin >> a[i];
    }
    // ai    
    cout << sum_of_primes(n , a);
    
    // cout << sum_of_primes(m , b);

    return 0;
}