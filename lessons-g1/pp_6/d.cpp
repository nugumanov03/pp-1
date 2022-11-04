#include<iostream>
#include<cmath>
#include<iomanip>

using namespace std;

float hypo(float a,float b){
    return sqrt(a*a + b*b);
}

void hupo2(float a , float b){
    cout << sqrt(a*a + b*b);
    return;
}


int main(){
    float a ,b;
    cin >> a >> b;
    cout << setprecision(20) << hypo(a , b);
    // hupo2(a,b);


    return 0;
}