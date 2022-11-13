#include<iostream>

using namespace std;

long long sum(){
    int a;
    cin >> a;
    if( a == 0){
        return 0;
    }
    return sum() + a;
}

int main(){

    cout << sum();
    return 0;
}