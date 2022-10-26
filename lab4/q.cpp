#include<iostream>
#include<algorithm>

using namespace std;

int main(){
    int n ;
    // cout << "enter num: ";
    cin >> n;
    for(int i = 0 ; i < n;i++){
        for(int j = i+1;j < n;j++){
            cout << ".";
        }
        for(int j = n-i-1;j < n;j++){
            cout << "*";
        }
        for(int j = n-i;j < n;j++){
            cout << "*";
        }
        for(int j = i+1;j < n;j++){
            cout << ".";
        }
        
        // for(int j = i; j <n){
        //     cout << "*";
        // }
        cout << endl;
    }



}