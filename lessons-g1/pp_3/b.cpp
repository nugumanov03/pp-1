#include<iostream>

using namespace std;

int main(){
    int n ;
    cin >> n;
    int a[n][n];
    for(int i = 0; i < n;i++){
        for(int j = 0; j < n;j++){
            cin >> a[i][j];
        }
    }
    // ai
    for(int i = 0; i < n;i++){
        // for(int j = 0; j < i;j++){
        //     cout << a[0][n-1] << " ";
        // }   
        for(int j = n-1 ; j >= 0;j++){
            // if( i == j){
                cout << a[i][j] << " ";
            // }
        }
        // for(int j = i ; j < n;j++){
        //     cout << a[i][j] << " ";
        // }
    }




    return 0;
}