#include<iostream>

using namespace std;

int main(){
    int a , b ,c,max , min  ;
    cin >> a >>b >>c;
    if(a>b && a>c){
        max= a;
    }else if(b>a && b>c){
        max= b;
    }else if(c>a && c>b){
        max= c;
    }

    if(a < b && a <c){
        min = a;
    }else if(b < a && b<c){
        min= b;
    }else if(c>b && c>a){
        min= c;
    }
    cout << max - min;



}