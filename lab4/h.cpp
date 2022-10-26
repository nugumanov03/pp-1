#include<iostream>

using namespace std;

int main(){
    int n , m;
    cin >> n >> m;
    int a[n][m];
    int line , minline= 1000000;
    int sumrows[n];
    for(int i = 0; i < n;i++){
        for(int j = 0; j < m;j++){
            cin >> a[i][j];
        }
    }
    // ai
    for(int i = 0; i < n;i++){
        int minlinesum = 0;
        for(int j = 0; j < m;j++){
            minlinesum += a[i][j];
        }
        // cout << minlinesum << endl;
        sumrows[i] = minlinesum;
        // sumrow[2] = 101;
    } 
    for(int i = 0 ; i < n;i++){
            if(sumrows[i] < minline){
            minline = sumrows[i];
            line = i+1;
        }
    }
    cout << line;

    return 0;
}