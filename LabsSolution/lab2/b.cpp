#include<iostream>

using namespace std;

int main(){
    int n;
    cin >> n;
    if( (n %2 == 1) || (n >= 6 && n <=20 && n%2 == 0)){
        cout << "Super";
    }else{
        cout << "Not Super";}  
}