#include<iostream>

using namespace std;

int main(){
    string s;
    cin >> s;
    for(int i = 0; i< s.size();i++){
        
        s[i] = 'z' - (s[i] - 'a');

        // 97 -> 122
        // 98 -> 121
        // 99 -> 120

        // 122 -> 97 
    }
    cout << s;

    return 0;
}