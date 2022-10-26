#include<iostream>
#include<cmath>
using namespace std;

int main(){
    float a, b;
    int a = 0;
    cin >> a >> b;
    
    float koef = ceil(a*2/b);
    // float c = abs(koef);
    if(koef == 1){
        cout << 2;
    }else {
    cout << koef;
    }

    return 0;
}