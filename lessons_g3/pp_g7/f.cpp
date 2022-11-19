#include<iostream>

using namespace std;

int cnt(string s,int i){
    if(i == s.size()){
        return 0;
    }
    if( s[i] >= '0' && s[i] <= '9'){
        return cnt(s,i+1) + 1;
    }
    return cnt(s,i+1);
}
// cnt("1e4a" , 0) => cnt("1e4a" , 1) + 1
// cnt("1e4a" , 1) => cnt("1e4a" , 2);
// cnt("1e4a" , 2) => cnt("1e4a" , 3) + 1;
// cnt("1e4a" , 3) => cnt("1e4a" , 4);
// cnt("1e4a" , 4) => 0;

int main(){
    string s;
    cin >> s;
    cout << cnt(s, 0);
    return 0;
}