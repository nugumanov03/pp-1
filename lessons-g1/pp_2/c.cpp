#include<iostream>

using namespace std;

int main(){
    int n , m;
    cin>>n >> m;
    int a[n][m];
    for(int i = 0; i < n;i++){
        for(int j = 0; j < m;j++){
            cin >> a[i][j];
        }
    }
    int sum_array[m];
    // for(int i = 0; i < n;i++){
    for(int j = 0;j < m;j++){
        int line_sum = 0;
        for(int i = 0; i < n;i++){
        // for(int j = 0;j < m;j++){
            line_sum+=a[i][j];
        }
        sum_array[j] = line_sum;
    }
    int max = sum_array[0], pos;
    for(int i = 1; i  < m ;i++){
        if(sum_array[i] > max){
            max = sum_array[i];
            pos = i;
        }
    }
    cout << max << "\n" << pos;



    return 0;
}