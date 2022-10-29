#include<iostream>

using namespace std;

int main(){
    int n;
    cin >> n;
    int max = -1231242, min = 123124124;
    while(n > 0){
        int k = n%10;
        if( max < k){
            max = k;
        }
        if( min > k){
            min = k;
        }
        n/=10;
    }
    cout << max << " " << min;

    return 0;
}