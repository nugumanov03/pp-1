#include<iostream>
#include<algorithm>

using namespace std;

int main(){
    int n;
    cin >> n;
    int a[n];
    for(int i = 0;i < n;i++){
        cin >> a[i];
    }
    // int maxi = a[0],maxi2 = a[0];
    // int pos;
    // for(int i = 0;i < n;i++){
    //     if( maxi < a[i]){
    //         maxi = a[i];
    //         pos = i;
    //     }
    // }
    // a[pos] = -123122332;
    // for(int i = 0 ; i < n;i++){
    //     maxi2 = max(maxi2 , a[i]);
    // }
    sort(a , a+n);
    cout << a[n-1] * a[n-2];
}