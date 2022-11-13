#include<iostream>

using namespace std;

bool isPal(string s , int i){
    if(i == s.size() / 2){
        return true;
    }
    if(s[i] != s[s.size() -1 -i]){
        return false;
    }
    return isPal(s , i+1);
}

int main(){ 
    string s;
    cin >> s;
    if(isPal(s , 0) == true){
        cout << "Yes";
    }else cout << "No";

    return 0;
}