#include<iostream>
#include<cmath>

using namespace std;

int main(){
    string s ,t;
    cin >> s >> t;
    int a =ceil(s.size() / t.size());
    for(int i = 0; i < a;i++) t+=t;

    string stt = "";
    for(int i = 0; i < s.size() ; i++){
        int fir = s[i] - 'a';
        int sec = t[i] - 'a';
        stt += 'a' + (fir + sec)%26;
    }
    cout << stt;
    return 0;
}