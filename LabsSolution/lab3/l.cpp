#include<iostream>
#include<algorithm>
#include<string>

using namespace std;

int main(){
    int a,b;
    cin >> a;
    int ar[a];
    for(int i = 0; i < a;i++){
        cin >> ar[i];
    }
    cin >> b;
    int ab[b];
    for(int i=0; i < b;i++){
        cin >> ab[i];
    }

    int arb[a+b];
    for(int i = 0; i< a;i++){
        arb[i] = ar[i];
    }

    for(int i = a; i <= a+b;i++){
        arb[i] = ab[i-a];
    }

    sort(arb,arb+a+b);
    for(int i = 0;i < a+b;i++){
        cout << arb[i] << " ";
    }



    return 0;
}