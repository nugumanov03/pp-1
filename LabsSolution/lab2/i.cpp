#include<iostream>
#include<cmath>
using namespace std;

int main(){
    int a;
    cin >> a;
    int cnt = 0;
    for(int i = 0 ; i < a; i++){
        int b;
        cin >> b;
        if(b%10==7){
            cnt++;
        }

    }

    cout << cnt;
    
    return 0;
}