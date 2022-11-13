#include<iostream>

using namespace std;

int foo(int n){
    if(n == 0){
        return 0;
    }
    if(n == 1){
        return 1;
    }
    cout << n<< " ";
    return foo(n-1) + foo(n-2);
}
// foo(5) = foo(4) * 2;
// foo(4) = foo(3) * 2;
// foo(3) = foo(2) * 2;
// foo(2) = foo(1) * 2;
// foo(1) = foo(0) * 2;
// foo(0) = 1 -> foo(1) = 2 - > foo(2) = 4 -> foo(3) = 8 -> foo(4)=16-> foo(5) = 32

// foo(1)  foo(0) -> *cout n = foo(0) = 1
int main(){
    int n = 5;
    cout << foo(n);

    return 0;
}