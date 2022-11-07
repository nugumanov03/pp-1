#include<iostream>
#include<cmath>
#include<iomanip>

using namespace std;

float hypo(int a, int b){

    return sqrt(a*a + b*b);
}

int main(){
    int a , b; // 3 , 4 -> hypo = 5 ; 7 ,8 - > 49 + 64 = sqrt(113)
    cin >> a >> b;
    cout << fixed << setprecision(4) << hypo(a,b) << endl;
    int a2,b2;
    cin >> a2 >> b2;
    cout << hypo(a2 , b2);
    max(a , b)

    return 0;
}