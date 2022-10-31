#include<iostream>

using namespace std;

int main(){
    int n ;
    cin >> n;
    int a[n][n];
    int mx = -123123123;
    int posx = 0 , posy = 0;
    for(int i = 0;i < n;i++){
        for(int j =0;j < n;j++){
            cin >> a[i][j];
        }
    }
    //  all inp
    for(int i = 0; i < n;i++){
        for( int j =0;j < n;j++){
            if(mx < a[i][j]){
                mx = a[i][j];
                posx = i + 1;
                posy = j + 1;
            }
        }   
    }

    cout << posx << " " << posy;

    return 0;
}