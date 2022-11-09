#include<iostream>

using namespace std;

int max(int a , int b){
    if( a > b){
        return a;
    }else{
        return b;
    }
}


int main(){
    // f(x) = x + 5;
    // x = 5 -> f(x) = 10
    // g(x ,y) = x - y
    // x = 5  , y = 7 -> g(x , y) = 2
    // f(x , y) = x + y;
    int a , b;
    cin >> a >>b; // a = 5; b = 7

    cout << max(b ,a);


    return 0;
}