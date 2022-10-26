#include<iostream>

using namespace std;

int main(){
    int n , m , posx;
    cin >> n >> m;
    int a[n][m];
    for(int i = 0; i < n;i++){
        for(int j = 0 ; j < m;j++){
            cin >> a[i][j];
        }
    }
    int linesum , minline = 12123123;
    for(int i = 0; i < n;i++){
        linesum = 0;
        for(int j = 0 ; j < m;j++){
            linesum += a[i][j]; // linesum = linesum + a[i][j]
        }
        // linesum : 49 i =0 
        // linesum : 218 i =1 
        // linesum : -91 i =2

        if(linesum < minline){
            minline = linesum;
            posx = i+1;
        }
        // cout << linesum << endl;
    }

    cout << posx << endl;
    // for(int j = 0; j < m;j++){
    //     for(int i = 0; i < n;i++){
    //         cout << a[i][j] << " ";
    //     }

    //     cout << endl;
    // }
}