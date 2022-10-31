
#include<iostream>

using namespace std;

int main(){
    string s , t;
    cin >> s >> t;
    bool boolka = true;
    for(int i = 0; i < s.size();i++){
        if(s[i] != t[i]){
            boolka = false;
        }
    }
    if (boolka){
        cout << "YES";
    }else{cout << "NO";}
    return 0 ;
}