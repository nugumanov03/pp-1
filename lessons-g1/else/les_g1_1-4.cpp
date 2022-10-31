#include<iostream>
#include<algorithm>

using namespace std;

int main(){
    int n ,cnt = 0;
    // cout << "enter num: ";
    cin >> n;
    int a[n*n];
    int mx = -123123123;
    int mx2 = -123123123;
    for(int i = 0;i < n*n;i++){
            cin >> a[i];
    }
    for(int i = 0;i < n*n;i++){
        if(mx < a[i]){
            mx = a[i];
        }

        if(mx2 < a[i] && mx != a[i]){
            mx2 = a[i];
        }
            // cin >> a[i];
    }
    if(mx2 == -123123123){
        cout << 0;
    }else {
        cout << mx2;
    }
}