#include<iostream>

using namespace std;

int main(){
    int n , c;
    cin >> n;
    c = n;
    int cnt = 0;
    while(c > 0){
        cnt++;
        c/=10;
    }
    // n = n ;
    int a[cnt];
    int i = 0;
    while(n>0){
        int k = n%10;
        cout << k << " ";
        a[i] = k;
        i++;
        n/=10;
    }
    cout << endl;

    for(int i = 0; i < cnt;i++){
        cout << a[i] << " ";
    }



    return 0;
}