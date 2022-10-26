#include<iostream>
#include<cmath>
using namespace std;

int main(){
    int a;
    cin >> a;
    int max = -123123;
    for(int i = 0 ; i < a; i++){
        int b;
        cin >> b;
        if(max < b){
            max = b;
        }
    }
    cout << max;
    return 0;
}