#include<iostream>

using namespace std;

int main(){
    int n;
    int a[n][n];
    for(int i =0;i < n;i++){
        for(int j = 0;j < n;j++){
            cin >> a[i][j];
        }
    }
    bool flag = true;
    for(int i = 0;i < n;i++){
        for(int j = 0; j < n;j++){
            if( !(a[i][j] == a[j][i])){
                flag = false;
                // cout << "NO";
                // return 0;
            }
        }
    }
    // flag = true <-> false
    if(flag == true){
        cout << "YES";
    }else cout << "NO";

    // cout << "YES";
    return 0;
}