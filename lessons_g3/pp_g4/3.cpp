#include<iostream>

using namespace std;

int max(int a,int b){
    if(a>b){
        return a;
    }
    return b;
}
void maxi1(int a,int b){
    a = a+b;
    if(a > b){
        cout << a;
    }else{
        cout << b;
    }
    return;
}
int main(){
    int a ,b ;
    cin >> a >> b;
    cout << max(a ,b);
    maxi2(a , b);
}