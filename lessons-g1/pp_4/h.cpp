#include<iostream>

using namespace std;

int main(){
    string s;
    cin >> s;   
    int x;
    cin >> x;

    for(int i = 0; i < s.size();i++){
        if( (int)s[i] + x > 90){
           s[i] =  int(s[i]) + x - 26;
        }else{
        s[i] = (char)((int)s[i]+x);
        }
        cout << s[i];
    }


    return 0;
}