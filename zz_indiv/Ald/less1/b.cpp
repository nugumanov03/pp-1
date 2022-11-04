#include<iostream>

using namespace std;

int main(){
    int n;
    cin >> n;
    int a[n];
    int was[10];
    for(int i = 0 ; i< n;i++){
        cin >> a[i];
    }
    int max = -123124;
    for(int i = 0;i < n;i++){
        if(max < a[i]){
            max = a[i];
        }
    }
    int cnt = 0;
    for(int i = 0;i < n;i++){
        if(max == a[i]){
            // cnt++;
            cout << a[i] << " ";
        }
    }
    // for(int i = 0;i < cnt; i++){
    //     cout << max;
    // }

    
    // for(int i = 0 ; i< 10;i++){
    //     was[i] = 0;
    // }
    // for(int i = 0 ; i< n;i++){
    //     was[a[i]]++;
    // }

    // for(int i = 0;i < 10;i++){
    //     cout << was[i] << " "; 
    // }

    return 0;
}