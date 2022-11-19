#include<iostream>

using namespace std;

int maxdig(int n,int max){
    int k = n%10;
    // if( n < 0){
    //     return maxdig( , max);
    // }
    if(n == 0){
        return max;
    }
    if(max < k){
        max = k;
    }
    return maxdig(n/10 , max);
}

int main(){
    int n;
    cin >> n;
    cout << maxdig(n,-123   );
    return 0;
}