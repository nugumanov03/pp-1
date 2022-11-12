#include<iostream>

using namespace std;

int main(){
    int n;
    cin >> n;
    int a[n];
    for(int i = 0; i < n;i++){
        cin >> a[i];
    }
    int x;
    cin >> x;
    int pos = n;
    for(int i = 0;i < n;i++){
        if( x > a[i]){
            pos = i;
            break;
        }
    }
    cout << pos + 1;
}