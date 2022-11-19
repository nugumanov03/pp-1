#include<iostream>
#include<algorithm>

using namespace std;
string s;

string change(int i){
    string res ="";
    res += s[i];
    if(i == s.size()-1){
        return res;
    }
    res+= "*";
    return res + change(i+1) ;
    // change(0) = S* + change(1)
    // chage(1) = A* + chenge(2)
    // chage(2) = L* + chenge(3)
    // chage(3) = A* + chenge(4)
    // chage(4) = M
    // change(0) = S* + A* + L* + A* + M;
} // SALAM

void ch(int i ){
    if(i == s.size()-1){
        cout << s[i];
        return;
    }
    cout << s[i]<< "*";
    return ch(i+1);

}
int main(){
    cin >> s;
    // string res = change(s , 0);
    // reverse(res.begin(), res.end());
    // cout << change(0);
    ch(0);
}

