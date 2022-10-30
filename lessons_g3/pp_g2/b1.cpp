#include<iostream>

using namespace std;

int main(){
    int n ,m;
    cin >> n >> m;
    char a[n][m];
    for(int i = 0; i < n;i++){
        for(int j = 0; j < m;j++){
            cin >> a[i][j];
        }
    }
    int a2[n][m];
    for(int i = 0;i < n;i++){
        for(int j = 0; j < m;j++){
            cin >> a2[i][j];
        }
    }
    // ai
    bool flag = true;
    for(int i = 0 ; i < n;i++){
        for(int j = 0;j < m;j++){
            if(a[i][j] == '.' || (a2[i][j] >3 && a[i][j] == 'R') || (a2[i][j] %2 == 1 && a[i][j] == 'B')){
                continue;
            }
            if((a2[i][j] == 0 && a[i][j] != '.') || ( a2[i][j] == 2 || a2[i][j] == 3 ||  a2[i][j] == 6 ) && (a[i][j] != 'G')){
                    flag = false;
                    break;
            }
        }
    }

    if(flag){
        cout << "YES";
    }else cout << "NO";

    return 0;
}