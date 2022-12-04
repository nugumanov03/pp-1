#include<iostream>

using namespace std;

int main(){
    string s;
    cin >> s;
    for(int i =0 ; i < s.size() ;i++){
        // if(isalpha(s[i])) cout << s[i];
        if(!isalpha(s[i])) s.erase( i , 1) ,i--;
    }
    cout << s;
    return 0;
}