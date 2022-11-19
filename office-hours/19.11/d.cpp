#include<iostream>

using namespace std;

int foo(int n){
    // cout<<n << " ";
    if(n == 0){
        return 2;
    }
    if(n == 1){
        return 3;
    }
    return foo(n-1) + foo(n-2);
}
// foo(5) = foo(4) * foo(3); // 13 +  8 = 21
// foo(4) = 8 -> foo(3) = 4
// foo(4) = foo(3) * foo(2); // 8 + 5 = 13
// foo(3) = foo(2) * foo(1); // 5 + 3 = 8
// foo(2) = foo(1) * foo(0); // 5
// foo(0) = 2;
// foo(1) = 3;


int main(){ 
    int n = 5;
    // cin >> n;
    cout << foo(3);
    return 0;
}