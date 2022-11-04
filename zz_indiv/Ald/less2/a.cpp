#include<iostream>

using namespace std;

int main(){
    string s; // "aac" -> "bbd"
    cin >> s;
    // ai 
    for(int i = 0; i < s.size();i++){
        if(s[i] == 'z'){
            s[i] = 'a';
        }else if(s[i] >= 'a' && s[i] <= 'z'){
            s[i]+=1;
        }
    }
    cout << s.size() << endl;
    cout << s;

    return 0;
}