#include<iostream>

using namespace std;

void transpose(int n,int m, int *a){
    int a2[n][m];

    for(int i = 0; i < n;i++){
        for(int j = 0; j < m;j++){
            a2[i][j] = a[i*m + j]; 
        }
    }
    for(int j = 0;j < m;j++){
        for(int i = 0;i < n;i++){
            cout << a2[i][j] << " ";
        }
        cout << endl;
    }
}


int main(){
    int n,m;
    cin >> n >> m;
    int a[n][m];
    for(int i =0;i < n;i++){
        for(int j = 0;j < m;j++){
            cin >> a[i][j];
        }
    }
    transpose(n , m , &a[0][0]);

    return 0;
}