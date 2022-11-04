#include<iostream>
#include<cmath>

using namespace std;

void sum(int *pa , int *pb ,int n){
    int a = *pa; 
    int dif[n];
    for(int i = 0; i < n;i++){
        dif[i] = abs(*(pa+i) - *(pb+i));
    }
    // cout << *(pa) << endl;
    for(int i = 0; i < n;i++){
       cout << dif[i] << " ";
    }
    return;
}

int main(){
    int n;
    cin >> n;
    int a[n] , b[n];
    for(int i = 0; i < n;i++){
        cin >> a[i];
    }
    for(int i = 0; i < n;i++){
        cin >> b[i];
    }
    // int *pa = a;
    // int *pb = b;
    sum(a , b , n);
    // cout << pa<<" " <<pb;
    // cout << sum(a,b);

    return 0;
}