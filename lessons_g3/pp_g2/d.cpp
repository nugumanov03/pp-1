#include<iostream>

using namespace std;

int main(){
    string s;
    cin >> s;
    string st = "";
    for(int i = 0;i < s.size();i++){
        int cnt = 0;
        while(s[i] != 1){
            cnt++;
            i++;
        }
        char a = cnt+'a';
        st+=a;
    }
    cout << st;

    return 0;
}