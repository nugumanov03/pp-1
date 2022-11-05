#include<iostream>
using namespace std;

int main(){
    string s;
    cin >>s;
    int x;
    cin >> x;
    for(int i = 0; i < s.size();i++){
        int num = s[i];
        if(x > 26){
            x = x%26;
        }
        if( num+x > 122){
            s[i] = s[i] - 26 + x;
        }else{
            s[i]+=x;
        }
    }
    cout << s;

    return 0;
}
