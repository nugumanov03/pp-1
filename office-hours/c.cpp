#include<iostream>

using namespace std;

int a[1000];

int main(){
    int b , i = 0;
    int prelast,last;
    while(cin >> b){
        a[i] = b;
        i++;
        prelast = a[i-1];
        last = a[i];
    }

    

    return 0;
}