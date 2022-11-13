#include<iostream>

using namespace std;

int foo2(int n){
    return n+3;
}

int foo(int n){
    return foo2(n - 5)+2;
}
// foo(5) = foo2(5-5) +2;
//foo2(0) = 0 + 3 = 3

int main(){
    int n = 5;
    cout << foo(n);

    return 0;
}