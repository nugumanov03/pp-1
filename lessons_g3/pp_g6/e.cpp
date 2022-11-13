#include<iostream>

using namespace std;

bool power2(float n){
    if(n == 1){
        return true;
    } 
    if(n < 2){
        return false;
    }
    return power2(n/2);
// power2(18) = power2(9);
// power2(9) = power2(4.5);
// power2(4.5) = power2(2.25);
// power(2.25) = power2(1.125);
// power(1.125) = false;
}

int main(){
    float n;
    cin >> n;
    if(power2(n) == true){
        cout << "YES";
    }else cout << "NO";
}