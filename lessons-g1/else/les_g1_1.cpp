#include<iostream>

using namespace std;

int main(){
    int n = 10;
    int sum = 0;
    for(int i = n; i > 0  ;i--){
        cout << i << " " << sum << endl ;
        sum = sum + i;
    }

    cout << sum;



    return 0;
}