#include<iostream>
#include<iomanip>
using namespace std;

bool chec(int *a,int n, int x){
    for(int i = 0; i< n;i++){
        if(a[i] == x ){
            return true;
        }
    }
    return false;
}

int main(){
    int n;
    cin >> n;
    int a[n];
    for(int i = 0;i< n;i++){
        cin >> a[i];
    }
    int x;
    cin >> x;
    if(chec(a , n , x)){
        cout << "YES";
    }else cout << "NO";

    return 0;
}