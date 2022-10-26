#include<iostream>

using namespace std;

int main(){
    int a, b ,c;
    cin >> a >> b >>c;
    if(a>b && a>c && b>c){
        cout<< a-c;
    }
    if(a>b && a>c && c>b){
        cout<< a-b;
    }
    if(b>a && b>c && a>c){
        cout<< b-c;
    }
    if(b>a && b>c && a<c){
        cout<< b-a;
    }
    if(c>a && c>b && a>b){
        cout<< c-b;
    }
    if(c>a && c>b && b>a){
        cout<< c-a;
    }
    return 0;
}