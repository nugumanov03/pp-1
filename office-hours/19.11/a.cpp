#include<iostream>
#include<cmath>

using namespace std;

int main(){
    string s;
    cin >> s;
    // 101 => 5
    int otv = 0;
    // otv += s[s.size()-1] * 2^0;
    // otv += s[s.size()-2] * 2^1;
    // otv += s[s.size()-3] * 2^2;
    // otv = s[2] * 2^0 + s[1] * 2^1 + s[0] * 2^2;
    for(int i = s.size()-1 , k = 0; i >= 0; i--, k++){
        if( s[i] == '1'){
            otv+=pow(2,k);
        }
        // otv+= (s[i]-48) * pow(2,k);
    }
    // 101 = 2^0 * 1 + 2^1 * 0 + 2^2 * 1 + 2^3 * 0 ... 
    cout << otv;

    return 0;
}