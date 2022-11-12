#include<iostream>

using namespace std;

string toBIN(int n){
    if(n == 0){
        return "0";
    }
    if( n == 1){
        return "1";
    }
    int ost = n%2;
    string st;
    if( ost == 1){
        st = "1";
    }else st = "0";
    return toBIN(n/2) + st;
    // toBIN(3) = toBin(1) + "1"
    //  toBin(1) = "1"
    // toBin(5) = toBin(2) + "1"
    // toBin(2) = toBin(1) + "0"
    // toBin(1) = "1"
}


int main(){
    int n;
    cin >> n;
    cout << toBIN(n);
}