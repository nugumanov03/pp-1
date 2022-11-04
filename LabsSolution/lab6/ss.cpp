#include<iostream>

using namespace std;

int cnt(int a , int b){
    
    return a+b;
}

int main(){
    int n;
    cin >> n;
    int a[n], b[n];
    for(int i = 0;i< n;i++){
        cin >> a[i];
    }
    for(int i = 0;i< n;i++){
        cin >> b[i];
    }
    cnt(a , b);

    return 0;
}