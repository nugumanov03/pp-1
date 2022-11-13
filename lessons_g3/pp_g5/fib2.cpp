#include<iostream>

using namespace std;

int foo(int n){
    if(n <= 0){
        return 1;
    }
    if(n == 1){
        return 1;
    }
    return foo(n-1) * n;
    // foo(4) = foo(3) *4;
    // foo(3) = foo(2) *3;
    //foo(2) = foo(1) * 2;
    // foo(1) = 1;
    // n! = n * n-1 * ....2, 1 
    // n! = (n-1)! * (n-2)!
    // n! = 
    // 4! = 24
    // 5! = 4! * 5
    // f(x) = x!
    // f(x) = x * (x-1)!
}
// 

int main(){
    int n = 3;
    cout << foo(n);

    return 0;
}