#include<iostream>

using namespace std;

char toUp(char a){
    if(a >= 'a' && a<='z'){
        return a-32;
    }
    return a;
}

int main(){
    char a;
    cin >> a;// a = 'c' -> toUp('c') = 'C'
    // a ='C' -> toUp('C') = 'C'
    cout << toUp(a);
    return 0;
}