#include<iostream>

using namespace std;

int main(){
    string s;
    getline( cin , s);
    for(int i = 0; i < s.size();i++){
        if(s[i] == 'z') s[i] = 'a';
        else if(s[i] == 'Z') s[i] = 'A';
        else if(isalpha(s[i]))s[i]+=1;
    }
    cout << s;
    return 0;
}