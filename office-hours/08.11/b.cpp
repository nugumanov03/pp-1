#include<iostream>

using namespace std;

int foo(int n){
    if( n < 0){
        return 1;
    }
    cout << n << " ";
    return foo(n-1) + foo(n-2);
    // cout << n;
}



int main(){
    int n = 15;
    cin >> n; // n = 4;
    cout<< endl <<foo(n);

    return 0;
}