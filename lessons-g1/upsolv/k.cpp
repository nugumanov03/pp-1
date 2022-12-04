#include<iostream>
#include<cmath>

using namespace std;

int main(){
    string s;
    cin >> s;
    int num = 0;
    for(int i = 0; i< s.size(); i++){
        if(s[i] == '1') num+= pow(2 , s.size() -1- i);
    }
    cout << num;

    return 0;
}