#include<iostream>

using namespace std;

string toBin(int n){
    if(n == 0){
        return "0";
    }
    if(n == 1){
        return "1";
    }

    return toBin(n/2) + char((n%2)+48);
}

int main(){
    int n;
    cin >> n;
    cout << toBin(n);
}