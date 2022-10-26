#include<iostream>
#include<cmath>
using namespace std;

int main(){
    float a, b;
    cin >> a >> b;
    if (a==b){
        cout << 0;
    }else if(a > b){
        cout << 1;
    }else {cout << 2;}
    

    
    return 0;
}