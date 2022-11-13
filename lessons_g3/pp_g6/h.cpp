#include<iostream>

// a[n] = a[n-2] + a[n-1]
using namespace std;

int fibb(int n){
    if(n == 0){
        return 0;
    }
    if(n == 1){
        return 1;
    }

    return fibb(n-2) + fibb(n-1);
}
//fibb(3) = fibb(1) + fibb(2);
// fibb(2) = fibb(0) + fibb(1);
// fibb(1) = 1;
// fibb(1) = fibb(-1) + fibb(0);
// fibb(0) = 0;

int main(){
    int n;
    cin >> n;
    cout << fibb(n);
}