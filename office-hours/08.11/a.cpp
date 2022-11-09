#include<iostream>

using namespace std;

int foo2(int n){
    return n+1;
}

int foo(int n){
    // int k = 7;
    return foo2(n+2);
    // cout << n;
}

int main(){
    int n;
    cin >> n; // n = 15;
    cout<< foo(n);



    return 0;
}