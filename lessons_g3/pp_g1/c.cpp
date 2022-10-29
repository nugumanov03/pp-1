#include<iostream>

using namespace std;

int main(){
    int n;
    cin >> n;
    int a1[n] , a2[n];
    for(int i = 0; i < n;i++){
        cin >> a1[i] ;
    }
    for(int i = 0; i < n;i++){
        cin >> a2[i];
    }
    int t,cnt = 0;
    cin >> t;
    // ai
    for(int i = 0; i < n;i++){
        if((a2[i] <= t && t <= a1[i]) || (a1[i] <= t && t <= a2[i])){
            cnt++;
        }
    }
    cout << cnt;




    return 0;
}