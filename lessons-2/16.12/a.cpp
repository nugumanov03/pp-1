#include<iostream>

using namespace std;

int main(){
    int n , m;
    cin >> n >> m;
    int a[n][m];
    for(int i = 0; i < n ; i++ ){
        for(int j = 0; j< m; j++ ){
            cin >> a[i][j];
        }
    }
    int cn[n];
    for(int i = 0; i < n;i++){
        int cnt = 0;
        for(int j = 0 ; j < m;j++){
            if(a[i][j] > 0){
                cnt++;
            }
        }
        cn[i] = cnt;
    }
    bool flag = true;
    for(int i  = 0 ;i < n;i++){
        if(cn[i] != cn[i+1]){
            flag = false;
            break;
        }
    }
    if(flag){
        cout << "Numbers are equal";
        return 0;
    }
    int max = cn[0] , pos;
    for(int i = 1 ; i < n;i++){
        if(cn[i] > max){
            cn[i] = max;
            pos = i;
        }
    }
    cout << pos + 1;




    return 0;
}