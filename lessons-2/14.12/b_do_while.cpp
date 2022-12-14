#include<iostream>

// #define chetam  cout << i<< " "; 

using namespace std;
int was[9];
int main(){
    int a;
    do{
        cin >> a;
        was[a-1]++;
    }while(a != 0);
    for(int i = 0; i < 9;i++){
        cout << was[i] << " ";
    }
    return 0;
}