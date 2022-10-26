#include<iostream>

using namespace std;
int main(){
    int n;
    cin >> n;
    for(int i = 0 ; i < n;i++){
        if((i %3==0)&& (i %5==0)){
            cout << i<<" fizz-buzz"<< endl;
        }else if(i %3 == 0){
            cout << i<<" fizz"<< endl;
        }else if(i%5 ==0){
            cout <<i <<" buzz"<< endl;
        }

    }
}