#include<iostream>

using namespace std;

int sum(string s , int i){
    if(i == -1){
        return 0;
    }
    // s.erase(size , 1);
    return sum(s, i-1) + (int)s[i]-48;    
}
// s = "479"
//  sum(s , 2) = sum(s , 1) + s[2]-48 
// sum(s , 1) = sum(s , 0) + s[1]-48
// sum(s , 0) = sum(s , -1) + s[0]-48;s
// sum(s , -1) = 0

int main(){ 
    string s;
    cin >> s;
    cout << sum(s , s.size()-1);
    return 0;
}