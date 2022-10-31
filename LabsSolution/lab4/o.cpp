#include<iostream>
#include<algorithm>

using namespace std;

int main(){
    int n, pos;
    // cout << "enter num: ";
    cin >> n;
    int a[n][n];
    int mx = -1212332;
    for(int i = 0 ; i < n;i++){
        for(int j = 0;j < n;j++){
           cin >> a[i][j];
        }
    }
    for(int i = 0 ; i < n;i++){
        for(int j = 0;j < n;j++){
          if(i == j){
            if(mx < a[i][j]){
                mx = a[i][j];
                pos = i+1;
            }
          }
        }
    }
    cout << "Maximum element is: " << mx << " with coordinates: " << pos<<";"<<pos;
    return 0;


}