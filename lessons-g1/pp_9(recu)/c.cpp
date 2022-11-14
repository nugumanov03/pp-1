#include<iostream>

using namespace std;

long long sum_ofdig(string n , int i){
    if(i == n.size()){
        return 0;
    }
    return sum_ofdig(n, i+1) + (int)n[i]-48;
}
// sum(123) = sum(12) + 3; == 6
// sum(12) = sum(1) + 2;
// sum(1) = sum(0) + 1;
// sum(0) = 0;

int main(){
    string n;
    cin >> n;
    cout << sum_ofdig(n , 0);
}