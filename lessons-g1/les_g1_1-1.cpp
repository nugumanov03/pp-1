#include<iostream>

using namespace std;

int main(){
    int n ,m;
    cin >> n >> m;
    int a[n];
    for(int i = 0; i < n;i++){
        cin >> a[i];
    }
    // ai
    int posi;
    for(int i = 0 ; i < n;i++){
        if( m >= a[i]){
            posi = i +1;
        }
    }
    cout << posi;
    return 0;
}