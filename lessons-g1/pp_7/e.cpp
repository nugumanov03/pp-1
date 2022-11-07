#include<iostream>

using namespace std;

float solu(float n,float m,float k){
    if( n == 1){
        return m;
    }
    return solu(n-1,m + m * k/100,k) + m;
}
// sm =3 * (0.5)^10;
// 3 ; 4 ; 50% -> 4 + 6 + 9 = 
int main(){
    float n;
    cin >> n;
    float m;
    cin >> m;
    float k;
    cin >> k;
    for(int i = 1;i < sqrt(n); i+=i){
        if( i == n){} ;
    }
    cout << solu(n,m,k);
    return 0;
}