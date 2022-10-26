#include<iostream>

using namespace std;

int main(){
    int n ,m;

    n = 5; // shift + alt + do
    n = 5;
    n = 5;
    n = 5;
    n = 5;
    n = 5;
    n = 5;
    n = 5;
    cin >> n >> ;
    int a[n][];
    for(int i =0 ; i < n;i++){
        for(int j = 0; j < n;j++){
            cin >> a[i][j];
        }
    }
    // ai
    int sums[n];
    for(int i = 0 ; i < n;i++){
        sums[i] = 0;
        for(int j = 0; j < ;j++){
            sums[i] += a[i][j];
        }
        // for i = 0 ; sums[i] : sum of row 1
    }
    int min = 123123,pos;
    for(int i = 0 ; i <n; i++){
        if( min > sums[i]){
            min = sums[i];
            pos = i+1;
        }
        cout << sums[i] << " ";
    }

    cout << pos;






    // int sums[0] = 0;
    // for(int j = 0; j < m;j++){
    //     sums[0] += a[0][j];
    // }
    // int sums[1] = 0;
    // for(int j = 0; j < m;j++){
    //     sums[1] += a[1][j];
    // }
    // int sums[2] = 0;
    // for(int j = 0; j < m;j++){
    //     sums[2] += a[2][j];
    // }
    //  ... n - times

    // cout << sums[0] << " " << sums[1] << " " << sums[2];

    return 0;
}