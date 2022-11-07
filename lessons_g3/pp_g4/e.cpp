// char x -> cin
// x = 'a' -> f(x)='A'

#include<iostream>

using namespace std;

string s;

string addchar(string s){
    return s+'a';
}

char toUp(){
    s = addchar(s);
    if(x >= 'a' && x <= 'z'){
        return x-32;
    }
    // return x;
}

int main(){
    cin >> s;
    for(int i = 0;i < s.size();i++){
        s[i] = toUp(s[i]);
    }
    cout << s;

    return 0;
    
}


