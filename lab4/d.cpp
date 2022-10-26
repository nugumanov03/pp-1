#include<iostream>

using namespace std;

int main(){
    int n;
    cin >> n;
    // int a[n][n];
    // for(int j = 0;j < n;j++){
    //     cout << j << " ";
    // }
    // cout << endl;
    for(int i = 0;i < n;i++){
        // cout << i << " ";
        for(int j=0;j < n;j++){
          if(i ==0){
            cout << j << " ";
          }else if(j==0){
            cout << i << " ";
          }else{
            cout << i * j << " ";
          }
        }
        cout << endl;
    }


    return 0;
}