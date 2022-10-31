#include<iostream>
// #include<string>

// for (auto & c: s) c = toupper(c);

using namespace std;

int main(){
    string s;
    cin >> s;
    int cnt = 0;
    for(int i = 0; i < s.size();i++){
        char sim1 = s[i];
        int sim = sim1;
        // cout << sim << " ";
        // s[i] = toupper(s[i]);
        if(sim  > 90 ){
            s[i] -= 32;
        }

    }

    cout << s;
    return 0;
}