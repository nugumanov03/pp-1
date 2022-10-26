#include<iostream>
#include<algorithm>

using namespace std;

int get_abs(int n){
    if(n < 0){
        n *= -1;
    }
    return n;
}

int main(){
    int n;
    cin >> n;

    cout << get_abs(n);

    return 0;
}
