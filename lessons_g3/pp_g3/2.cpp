#include<iostream>

using namespace std;

int main(){
    string s;
    cin >> s;
    int x;
    // s[1] = - / +
    // s[3] = '=';
    // s[0] = any num or 'x';
    // s[2] = any num or 'x';
    // s[4] = any num or 'x';
    // find x
    // x-1=1 - > 1-1 = x
    if(s[0] == 'x'){
        if(s[1] == '-'){
            x = ((int)s[4]- 48) +    ((int)s[2] - 48);
        }else{
            x = ((int)s[4]- 48) - ((int)s[2] - 48);
        }
    }else{
         if(s[1] == '-'){
            x = ((int)s[4]- 48) + ((int)s[0] - 48);
        }else{
            x = ((int)s[4]- 48) - ((int)s[0] - 48);
        }
    }

    
    




    cout << x;

    return 0;
}