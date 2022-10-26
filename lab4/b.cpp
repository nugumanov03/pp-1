#include<iostream>
#include<algorithm>

using namespace std;

int main(){
    int n ,cnt = 0;
    // cout << "enter num: ";
    cin >> n;
    int a[n][n];
    int mx = -123123123;
    int mx2 = -123123123;
    for(int i = 0;i < n;i++){
        for(int j =0 ; j < n;j++){
            cin >> a[i][j];
        }
    }
    // ai

     for(int i = 0;i < n;i++){
        for(int j =0 ; j < n;j++){
            if(mx < a[i][j]){
                mx = a[i][j];
            }
        }
    }
    
    // cout << mx << endl;
     for(int i = 0;i < n;i++){
        for(int j =0 ; j < n;j++){
            if(mx != a[i][j] && mx2 < a[i][j])
            // cout << a[i][j] << " ";
            mx2 = a[i][j];
        }
    }
    if(mx2 ==-123123123){
        mx2 = 0;
    }
    cout << mx2;
    // cout << cnt << endl;
    
    // if(cnt == n){
    //     cout << 0;
    // }else{
    //     cout << mx2;
    // }


    return 0;
}