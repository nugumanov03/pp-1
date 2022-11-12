#include<iostream>

using namespace std;

bool foo(int x){
    bool flag = false;
    if(x%2==0){
        flag = true;
    }
    return flag;
}

int main(){
    int n;
    cin >> n;
    // foo(5) = false
    // foo(12) = true
    if(foo(n) == true){
        cout << "YES";
    }else cout << "NO";
    int x = 10;
    if(foo(x) == true){
        cout << "Pravda";
    }else cout << "Ne pravda";
    // f(x) = x + 5;
    // f(2) = 7
    // f2(x) = *cout << x+2; = null 
    // g(x ,y) = x*2 + y
    // g(5 , 7) =17


    return 0;
}