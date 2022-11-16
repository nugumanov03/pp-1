#include<iostream>

using namespace std;

int count(int n){
    if(n%2 == 1){
        return 0;
    }
    return count(n/2) + 1;
}

// count(12) = count(6) + 1;
// count(6) = count(3) + 1;
// count(3) = 0;

int main(){
    int n;
    cin >> n;
    // string st = "";
    // while(n > 0){
    //     int k = n%2;
    //     st+= k+48;
    //     n/=2;
    // }
    // for(int i = 0;i < st.size();i++){
    //     if(st[i] == '1'){
    //         cout << i;
    //         break;
    //     }
    // }
    // int cnt= 0;
    // while( n%2!=1){
    //     cnt++;
    //     n/=2;
    // }
    // cout << cnt;
    cout << count(n);

    return 0;
}