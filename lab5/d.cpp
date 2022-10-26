#include<iostream>

using namespace std;

int main(){
    string s ;
    cin >> s ;
    bool flag = true;
    for(int i = 0; i < s.size();i++){
        if(s[i] != s[s.size() - i -1]){
            flag = false;
        }
    }
    int k = 10;
    bool checker =  (k == 5);
    // k +5 // k = k+5 // k+=5
    if( checker){
        cout << "YES";
    }else {
        cout << "NO";
    }
}