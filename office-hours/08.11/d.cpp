#include<iostream>
#include<iomanip>

using namespace std;


float hypo(int a,int b){
    float c = sqrt(a*a+b*b);
    // 49 + 64 = 113
    return c;
}

int main(){
    int a , b;
    cin >> a >> b;
    cout << fixed << setprecision(4) << hypo(a,b);
    

    return 0;
}