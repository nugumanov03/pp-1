#include<iostream>

using namespace std;

int main(){
    int n;
    cin >> n;
    int a[n];
    for(int i = 0;i < n;i++){
        cin >> a[i];
    }
    // ai
    // 1 1 1 1 1 2 4 5 5 5 7 9 
    int cnt = 0;
    for(int i = 1;i < n;i++){
        if(a[i] != a[i-1]){
            cnt++;
        }
    }
    
    // for(int i = 0;i < n-1;i++){
    //     if(a[i] != a[i+1]){
    //         cnt++;
    //     }
    // }
    // cnt 
    cout << cnt+1;
    return 0;
}