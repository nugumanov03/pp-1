#include <iostream>

using namespace std;

int main(){
    int n;
    cin >> n;
    // ai
    // n++;
    while( true ){
        int a= (n/1000)%10;
        int b = (n/100)%10;
        int c = (n/10)%10;
        int d = n%10;

        // cout << n << "\n";
        if(a!=b && a!=c && a!=d && b!=c && b!=d && c!=d){
            break;
        }
        n++;
    }

    cout << n;


    return 0;
}