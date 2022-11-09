#include<iostream>

using namespace std;

int foo2(int n){
    return n+10;
}
int foo(int n){
    return foo2(n+10)+5;
}

int main(){
    int a;
    a =5;

    cout << foo(a);

    return 0;
}