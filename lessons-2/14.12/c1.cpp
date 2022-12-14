#include<iostream>

using namespace std;

int main(){
    int n;
    cin >> n;
    for(int i = 100; i <= 999;i++){
        if( n == i%10 + (i/10)%10 + (i/100)) cout << i << endl;
    }
    return 0;
}