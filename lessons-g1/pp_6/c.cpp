#include<iostream>

using namespace std;

int diff(int a ,int b){
    return a - b;
}
int main(){
    int a,b;
    cin >> a,b;
    cout << diff(a , b);
}