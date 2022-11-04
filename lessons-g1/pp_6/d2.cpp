#include<iostream>

using namespace std;

bool flag(int n, int *a , int x){
    for(int i = 0;i < n;i++){
        if(a[i] == x){
            return true;
        }
    }
    return false;
}
int main(){
    int n;
    cin >> n;
    int a[n];
    for(int i =0;i < n;i++){
        cin >> a[i];
    }
    int x;
    cin >> x;
    if(flag(n , a , x)){
        cout << "YES";
    }else cout << "NO";

    return 0;
}