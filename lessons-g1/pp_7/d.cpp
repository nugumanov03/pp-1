#include<iostream>

using namespace std;

int poschit(int n, int *a , int *b){
    int cnt = 0;
    for(int i = 0; i < n;i++){
        for(int j = 0; j < n;j++){
            if( a[i] == b[j]){
                b[j] = 101;
                cnt++;
            }
        }
    }
    return cnt;
}

int main(){
    int n;
    cin >> n;
    int a[n];
    int b[n];
    for(int i = 0;i < n;i++){
        cin >> a[i];
    }
    for(int i = 0;i < n;i++){
        cin >> b[i];
    }
    // ai
    cout << poschit(n , a , b);

}