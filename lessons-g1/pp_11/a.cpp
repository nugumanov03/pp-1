#include<iostream>
#include<algorithm>

using namespace std;

int main(){
    string s;
    getline(cin , s);
    string s2 = "";
    for(int i = 0;i < s.size();i++){
        if(s[i] != ' '){
            s2+=s[i];
        }
    }
    string s3 = s2;
    reverse(s3.begin() , s3.end());
    if(s3 == s2){
        cout << "yes";
    }else cout << "no";

}