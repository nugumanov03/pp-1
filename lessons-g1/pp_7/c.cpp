#include<iostream>

using namespace std;

int recu(int n ){
    // if( n == 0){
    //     return 0;
    // }
    if(n == 1){
        cout << n << " ";
        return 1;
    }
    cout << n << " ";
    return recu(n-1);
}

int fac(int n){
    if( n == 1){
        return 1;
    }
    return fac(n-1) * n;
}

// n! = (n) * (n-1)!

void sum(int *pa){
    (*pa)++;
}

int main(){
    int n = 5;
    cout << endl <<recu(n) << endl;
    cout << fac(n);
    int a =6;
    cout <<  sum( &a ,5);
    // a =6 ;
    return 0;
}