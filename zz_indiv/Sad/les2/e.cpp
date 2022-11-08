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
    for(int i =1 ;i < n;i++){
        if( a[i] > a[i-1]){// prev a[i-1] -> next a[i+1]
            cnt++;// count 
            // sum+=a[i];
        }
    }
    cout << cnt; //  << " " << sum;


    return 0;
}
