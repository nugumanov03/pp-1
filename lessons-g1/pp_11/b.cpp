#include<iostream>
#include<cmath>

using namespace std;

int main(){
    string s;
    cin >> s;
    float pos1 , pos2;
    cin >> pos1 >> pos2;

    for(int i = 0 ; i <  ceil((pos2-pos1)/2) ; i++){
        swap(s[pos1-1 + i] , s[pos2-1 - i]);
    }
    cout << s;

    return 0;
}