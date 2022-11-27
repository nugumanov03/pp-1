#include<iostream>
#include<cmath>

using namespace std;

int toDec(int n ,int i){
    if(n == 0){
        return n;
    }
    if(n%2 == 1){ 
        return toDec(n/10 , i+1) + pow(2 ,i) ;
    }else{
        return toDec(n/10 , i+1);
    }
}
// 100010101(2) -> x(10)
// 100(2) -> 1 * 2^2 + 0 * 2 ^ 1 + 0 * 2^0 => 4
// 101(2) -> 1 * 2^2 + 0 * 2 ^ 1 + 1 * 2^0 => 5
// toDec(100 , 0) = toDec()
int main(){
    int n;
    cin >> n;
    cout << toDec(n , 0);
    return 0;
}