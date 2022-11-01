#include<iostream>

using namespace std;

int main(){
    // cout << "Hello world!";
    char a = 'F';
    // int a_num = a;

    int a_num = (int)'F';

    char a_ch = (char)70;

    cout << a_num;
    char b = 'C';
    string s;
    cin >> s; // s = "ABCD"
    // s.size() : 4
    for(int i = 0 ; i < s.size();i++){
        s[i]; // char 
        int num = s[i];
        s[i] = (char)(num+1);
    }
    


}