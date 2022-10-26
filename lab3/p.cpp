#include<iostream>
#include<cmath>

using namespace std;

int main(){
    int a;
    cin >> a;
    int b = sqrt(a);
    if(b*b == a){
         cout << "Yes";
    }else{
        cout << "NO";
    }
  
    
    // float b = sqrt(a);
    // int c = b;
    // if(c*c == a){
    //     cout << "good";
    // }else {cout <<"bad";}

    cout << "end";
}