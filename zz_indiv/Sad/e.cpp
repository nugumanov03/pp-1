#include<iostream>

using namespace std;

int main(){
    int n;
    cin >> n;
    int a[n];
    for(int i= 0;i < n;i++){
        cin >> a[i];
    }
    //ai
    for(int i = 0;i < n;i+=2){
        swap(a[i] , a[i+1]);
    }
    // for(int i = 0;i < n;i++){ // Частный случай (Сделай что-то n раз)

    // }
    // while(n>0){ // 1578 , 157 , 15 , 1 , 0 !> 0 -> break;
    //     int k = n%10;// k1 = 8 , k2 = 7, k3 = 5 , k4 = 1 
    //     n/=10; // 
    // }
    // for( int c; n> 0;n/=10){
    //     int k = n%10;
    // }

    return 0;
}
