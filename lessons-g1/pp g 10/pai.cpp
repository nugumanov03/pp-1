#include<iostream>

using namespace std;

int main(){
    int n ,m,cnt = 0;
    cin >> n >> m;
    int a[n][m];
    for(int i = 0; i < n;i++){
        for(int j = 0;j < m;j++){
            a[i][j] = 0;
        }
    }
    int kol;
    cin >> kol;
    int kvad[kol][4]; 
    for(int k = 0; k < kol;k++){
        for(int p = 0; p < 4;p++ ){
            cin >> kvad[k][p];
        }
    }
    // ai

    int x1 ,y1,x2 , y2;
    for(int k = 0; k < kol;k++){
        x1 = kvad[k][0];
        y1 = kvad[k][1];
        x2 = kvad[k][2];
        y2 = kvad[k][3];
        for(int i = x1; i < x2;i++){
            for(int j = y1;j < y2;j++ ){
                a[i][j] = 1;
            }
        }
    }
    

    // for(int i = 0; i < n;i++){
    //     for(int j = 0;j < m;j++){
    //         cout << a[i][j] << " ";
    //     }
    //     cout << endl;
    // }
    
    for(int i = 0; i < n;i++){
        for(int j = 0;j < m;j++){
            if(a[i][j] == 0){
                cnt++;
            } 
        }
    }

    cout << endl << cnt;





    // cout << cnt;
    return 0;
}