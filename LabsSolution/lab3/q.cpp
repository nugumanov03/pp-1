#include<iostream>

using namespace std;

int main(){
    int a;
    cin >> a;
    bool boolka = true;
    for(int i = 2;i < a;i++){
        if(a%i==0){
            boolka = false;
        }
    }
    if(a == 1 || a ==0){
        boolka = false;
    }
    if(boolka){
        cout << "Yes";
    } else { cout << "No";}
     
    return 0;
}