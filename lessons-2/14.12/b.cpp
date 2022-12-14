#include<iostream>

using namespace std;
int was[9];
int main(){
    while(true){
        int a;
        cin >> a;
        was[a-1]++;
        if( a== 0) break;
    }
    for(int i = 0; i < 9;i++){
        cout << was[i] << " ";
    }
    return 0;
}