#include<iostream>

// 2 3 5 7 11 13 17 19 23
using namespace std;

int main(){
    string s;
    cin >>s ;
    int n ,m;
    cin >> n >> m;
    char a[n][m];
    for(int i = 0 ;i < n;i++){
        for(int j = 0; j < m;j++){
            a[i][j] = 'X';
        }
    }
    a[0][0] = '*';
    int ox = 0 , oy = 0;
    for(int i = 0;i < s.size();i++){
        if(s[i] == 'D'){
            oy++;
        }
        if(s[i] == 'U'){
            oy--;
        }
        if(s[i] == 'R'){
            ox++;
        }
        if(s[i] == 'L'){
            ox--;
        }
        a[oy][ox] = '*';
    }
    for(int i = 0;i < n;i++){
        for(int j = 0;j < m;j++){
            cout << a[i][j];
        }
        cout<< endl;
    }

}