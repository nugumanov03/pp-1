#include<iostream>
#include<cmath>

using namespace std;

int main(){
    int n ,m;
    cin >> n >> m;
    int a[n][m];
    for(int i = 0;i < n;i++){
        for(int j = 0; j < m;j++){
            cin >> a[i][j];
        }
    }
    // ai
    for(int i = 0;i < n;i++){
        for(int j = 0; j < m;j++){
            int root = sqrt(a[i][j]);
            bool boolka = (a[i][j] == root*root);
            if(boolka){
                cout << root << " ";
            }else{
                cout << a[i][j] << " ";
            }
        }
        cout << endl;
    }



}