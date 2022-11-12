#include<iostream>

using namespace std;

int summ(int a, int b){
    // a = 8 ; b = 7
    a+=5;
    // 13
    return a - b;
}

int main(){
    int a,b;
    cin >> a >> b; // 5 8
    // a : 5
    a+=2;
    cout << summ( b, a);

    cout << a;
    // summ(5 , 8) = 13

    // f(x) = x + 2
    // f(5) = 7
    // g(x ,y) = x+y
    // g(5 , 8) = 13

    return 0;
}