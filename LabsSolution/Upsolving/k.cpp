#include<iostream>

using namespace std;

int main(){
    int n;
    cin >> n;
    int a[n] , b[n];
    for(int i = 0;i < n;i++){
        cin >> a[i];
    }
    for(int i = 0;i < n;i++){
        cin >> b[i];
    }
    int x , cnt = 0;
    cin >> x;
    for(int i = 0; i < n;i++){
        if((x >= a[i] && x <= b[i])){
            cnt++;
        }
    }
    cout << cnt;

    return 0;
}