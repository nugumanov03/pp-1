#include<iostream>
#include<algorithm>

using namespace std;

int main(){
    int n;
    cin >> n;
    int a[n];
    for(int i = 0; i< n;i++){
        cin >> a[i];
    }
    int m;
    cin >> m;
    int a2[m];
    for(int i = 0; i< m;i++){
        cin >> a2[i];
    }
    //ai
    int ekiarr[n+m];
    for(int i = 0; i < n;i++){
        ekiarr[i] = a[i];
    }
    for(int i = 0 ; i < m;i++){
        ekiarr[i+n] = a2[i];
    }

    // sort(ekiarr , ekiarr + n + m);
    // for(int i = 0; i < n+m ; i++){
    //     for(int j = i+1;j < n+m;j++){
    //         if(ekiarr[i] > ekiarr[j]){
    //             swap(ekiarr[i] , ekiarr[j]);
    //         }
    //     }
    // }
    for(int i = 0;i < n+m;i++){
        cout << ekiarr[i] << " ";
    }



}