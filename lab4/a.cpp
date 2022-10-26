#include<iostream>

using namespace std;

int main(){
    int n = 10;
    cin >> n;
    int a[n][n];
    int mx = -123123123;
    for(int i = 0;i < n;i++){
        for(int j =0 ; j < n;j++){
            cin >> a[i][j];
            if(mx < a[i][j]){
                mx = a[i][j];
            }

        }
    }

    cout << mx;


    return 0;
}