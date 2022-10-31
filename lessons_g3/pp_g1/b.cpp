#include<iostream>

using namespace std;

int main(){
    int n , m , x;
    cin >> n >> m >> x;
    int a[n][m];
    for(int i = 0; i< n;i++){
        for(int j = 0;j < m;j++){
            cin >> a[i][j];
        }
    }
    // cin >> x;
    // ai 
    
    int max = -12412524;
    for(int i = 0; i< n;i++){
        for(int j = 0;j < m;j++){
            if(a[i][j] > max){
                max = a[i][j];
            }
        }
    }

    if( max > x){
        cout << "NO";
    }else cout << "YES";

    return 0;
}