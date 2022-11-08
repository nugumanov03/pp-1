#include<iostream>

using namespace std;

int main(){
    int n;
    cin >> n;
    int a[n];
    for(int i= 0;i < n;i++){
        cin >> a[i];
    }
    //ai
    int cnt = 0;
    // int sum = 0;
    for(int i =0 ;i < n;i++){
        if( a[i] >= 0){
            cnt++;
            // sum+=a[i];
        }
    }
    cout << cnt; //  << " " << sum;


    return 0;
}
