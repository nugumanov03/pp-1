#include<iostream>
#include<cmath>
using namespace std;

int main(){
    int a;
    cin >> a;
    int sum = 0;
    for(int i = 1;i <= a;i++){
        sum+=i;
        // cout << sum << endl;
    }
    cout << sum;
    return 0;

}
