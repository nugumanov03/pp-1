#include<iostream>

using namespace std;

int foo(int n){
    if(n == 0){
        return 1;
    }
    if(n == 1){
        return 1;
    }
    cout << n << " ";
    return foo(n - 1) + foo(n - 2);
}
// a[n] = a[n-1] + a[n-2];
// foo(5) = foo(4) + foo(4) // 5 + 3 = 8
// foo(4) = foo(3) + foo(2) // 3 + 2 = 5
// foo(3) = foo(2) + foo(1) // 2 + 1 = 3
// foo(2) = foo(1) +  foo(0) // 2
// foo(1) = 1;
// foo(0) = 1;
int main(){
    int n;
    n = 4;
    cout << endl <<  foo(n);

    return 0;
}