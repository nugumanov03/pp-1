#include<iostream>

using namespace std;

int main(){
    int n , m;
    cin >> n >> m;
    int a[n][m];
    for(int i = 0;i < n;i++){
        for(int j = 0; j < m;j++){
            cin >> a[i][j];
        }
    }
    for(int i = 0;i < n;i++){
        int sum = 0;
        for(int j = 0;j < m;j++){
            sum+=a[i][j];
        }
        int avg = sum/m;
        cout << avg << " ";
    }

    return 0;
}