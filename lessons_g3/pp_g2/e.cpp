#include <iostream>
using namespace std;
int main(){
    
    string s;
    cin >> s;
    int cnt = 0;
    for(int i =0;i < s.size();i++){
        if(s[i] == '>' && s[i+1] == '>'&& s[i+2] == '-' && s[i+3]== '-' && s[i+4]== '>'){
            cnt++;
        }
        if(s[i] == '<' && s[i+1] == '-'&& s[i+2] == '-' && s[i+3]== '<' && s[i+4]== '<'){
            cnt++;
        }
    }
    cout << cnt;

    return 0;
}