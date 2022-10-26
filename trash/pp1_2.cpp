#include<iostream>

using namespace std;

int main(){
    int a1 ,a2 ,a3 , b1 , b2 ,b3 ,  mid , mid_b;
    cin >> a1 >> a2 >> a3 >>  b1 >> b2 >> b3;
    int maxi = max(max(a1,a2) , a3);
    int mini = min(min(a1,a2) , a3);

    int maxi_b = max(max(b1,b2) , b3);
    int mini_b = min(min(b1,b2) , b3);

    if(a1 < maxi && a1>mini){
        mid = a1;
    }
    if(a2 < maxi && a2>mini){
        mid = a2;
    }
    if(a3 < maxi && a3>mini){
        mid = a3;
    }

    if(b1 < maxi_b && b1>mini_b){
        mid_b = b1;
    }
    if(b2 < maxi_b && b2>mini_b){
        mid_b = b2;
    }
    if(b3 < maxi_b && b3>mini_b){
        mid_b = b3;
    }

    cout << (maxi * maxi_b) + (mini * mini_b) + (mid*mid_b);
    return 0;
}