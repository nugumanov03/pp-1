#include<iostream>

// #define chetam  cout << i<< " "; 

using namespace std;
int was[9];
int main(){
    int a;
    while(cin >> a && a != 0){
        was[a-1]++;
    }
    for(int i = 0; i < 9;i++){
        cout << was[i] << " ";
    }
    return 0;
}