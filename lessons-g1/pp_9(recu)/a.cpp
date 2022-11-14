#include<iostream>

using namespace std;

int foo2(int n){
    return n * 2;
}

int foo(int n){
    return foo2(n*n) + foo2(4);
}

int main(){
    int n;
    n = 5;
    cout << foo(n);

    return 0;
}