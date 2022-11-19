#include<iostream>

using namespace std;

bool check(int n){
    if(n == 1){
        return true;
    }
    if(n < 0){
        return false;
    }
    return check(n-3) + check(n-5); // check(n);
}
// check(14)= check(11) + check(9);
// check(11) = check(8) + check(6);

int main(){
    int n;
    cin >> n;
    if( check(n) == true){
        cout << "Yes";
    }else cout<< "No";
    // cout << check(n);
    return 0;
}