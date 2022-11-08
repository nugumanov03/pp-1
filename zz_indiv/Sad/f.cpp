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
    int ans[n];
    for(int i = 1;i < n;i++){
        ans[i] = a[i-1];
    }
    ans[0] = a[n-1];
    for(int i = 0;i < n;i++){
        cout << ans[i] << " ";
    }
    return 0;
}
