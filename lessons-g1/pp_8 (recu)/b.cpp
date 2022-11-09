#include<iostream>

using namespace std;

int foo(int n){
    cout << n;
    if( n < 0){
        return 0;
    }
    return foo(n-2) + 2;
}

// int foo(1){
//     cout << 1;
//     return foo(0) + 2;
// }
// foo(5) = foo(3) + 2 -> foo(3) =  foo(1) + 2 - >foo(1) =  foo(-1)+ 2 => foo(-1) = 0
// foo(5) => foo(4) => foo(3) => foo(2) => foo(1) => foo(0) = 153;
// foo(0) = 153 -> foo(1) = 155 -> foo(2) = 157 - > foo(3) = 159 foo(5) = 163

int main(){
    int a;
    a =5;

    cout << foo(a);

    return 0;
}