#include<iostream>

using namespace std;

int main(){ 
    int n;
    cin >> n;
    int a[n];
    for(int i = 0 ; i< n;i++){
        a[i]=i;
    }
    int doublearray[2*n];
    for(int i= 0; i < 2*n;i++){
        if(i >= n){
            doublearray[i] = i-n;
        }else {
            doublearray[i]= i; 
        }
    }

    for(int i =0;i < 2*n;i++){
        cout << doublearray[i] << " ";
    }



    return 0;
}