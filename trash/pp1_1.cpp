#include <iostream>

using namespace std;

int main(){
    int a , b;
    cin >> a >> b;
    // cout << a + b;
    if ( a ) {
        cout << " a = b";
    }else if ( a > b) {
        cout << " a > b";
    }else{
        cout << " a < b";
    }
    return 0;
}