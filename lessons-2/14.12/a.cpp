#include<iostream>
#include<algorithm>

using namespace std;

int main(){
    int n , l ,r;
    cin >> n >> l >>r;
    int a[n];
    for(int i  = 0; i < n;i++){
        cin >> a[i];
    }
    reverse( a + l - 1 , a + r );
    for(int i = 0; i < n;i++){
        cout << a[i] << " ";
    }
    cout << endl;
    for(int i = 0; i < n;i++){
        if( (i >= l-1 && i <= r-1) || i == n-1){
            cout << a[n - 1 - i] << " ";
        }else{
            cout << a[i] << " ";   
        }
    }


    return 0;
}