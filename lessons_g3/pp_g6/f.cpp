#include<iostream>

using namespace std;

string s;
int cnt_even(int pos){
    if(pos == s.size()){
        return 0;
    }
    if(s[pos]%2==0){
        return cnt_even(pos+1) + 1;
    }
    return cnt_even(pos+1);
}
// string s = "5467";
// cnt_even(0) = cnt_even(1) ;      //  {+1}В случае если s[0]%2==0 
// cnt_even(1) = cnt_even(2) + 1;
// cnt_even(2) = cnt_even(3) + 1;
// cnt_even(3) = cnt_even(4);
// cnt_even(4) = 0;

int main(){ 
    cin >> s;
    cout << cnt_even(0);
}