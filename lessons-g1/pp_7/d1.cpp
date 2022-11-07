#include<iostream>

using namespace std;

int count(int n , int *a ,int *b){
    int wasa[101];
    int wasb[101];
    for(int i = 0;i < 101;i++){
        wasa[i] = 0;
        wasb[i] = 0;
    }
    for(int i = 0 ;i < n;i++){
        wasa[a[i]]++;
        wasb[b[i]]++;
    }
    int cnt = 0;
    for(int i = 0;i < 101;i++){
        cnt+= min(wasa[i] , wasb[i]);
    }
    return cnt;
}


int main(){
    int n;
    cin >> n;
    int a[n];
    int b[n];
    for(int i = 0; i < n;i++){
        cin >> a[i];
    }
    for(int i = 0; i < n;i++){
        cin >> b[i];
    }
    cout << count(n , a , b);


    return 0;
}