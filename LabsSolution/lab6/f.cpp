#include<iostream>
#include<cmath>
#include<iomanip>
using namespace std;

bool chec(string s , int x){
    int cnt = 0;
    for(int i = 0 ; i < s.size();i++){
        if(isdigit(s[i])){
            cnt++;
        }
    }
    if(cnt >= x){
        return true;
    }else return false;
}

int main(){
    string s;
    cin >> s;
    int x;
    cin >> x;
    if(chec(s , x)){
        cout << "YES";
    }else cout << "NO";
    

    return 0;
}