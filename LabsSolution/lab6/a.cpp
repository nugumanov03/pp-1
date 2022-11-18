#include<iostream>

using namespace std;

int sum(int a , int b){
    int c = a + b;
    return c;
}

int main(){
    int a ,b;
    cin >> a>>b;
    cout << sum(a,b);
    // f(x , y) = x + y
    // cout << f(2 , 3);
    // sum(5  , 5) = 10 
    return 0;
}