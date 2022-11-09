#include<iostream>

using namespace std;

// fi(9) = 0+1+1+2+3+5+8+13+21 => 

char toUp(char s){
    if( s >= 'a' && s <= 'z'){
        s -= 32;
    }
    return s;
}

string stringtoUp(string s){
    for(int i = 0; i < s.size();i++){
        s[i] = toUp(s[i]);
    }
    return s;
}

int main(){
    string s;
    cin >> s;
    cout << stringtoUp(s);
    return 0;
}