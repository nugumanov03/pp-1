#include<iostream>

using namespace std;

int main(){
    double n;
    cin >> n;
    double sum = 0,sumkr =0;
    for(double i = 0;i < n;i++){
        double a,b,c;
        cin >> a >> b >> c;
        double kr;cin >> kr;
        double m = (a+b+c)/100 * 4 * kr;
        sumkr += kr;
        if(c < 20 || a + b < 30 || a + b + c < 50){
            m = 0;
        }
        sum+=m;
    }
    cout << sum/sumkr << " " << sum;

    return 0;
}