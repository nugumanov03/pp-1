#include<iostream>

using namespace std;

int main(){
    string s;
    cin >> s;   
    int x;
    cin >> x;

    for(int i = 0; i < s.size();i++){
        int num = (int)s[i];
        if( num + x > 90){
           s[i] =  num + x - 26;
        }else{
        s[i] = (char)(num +x);
        }
        cout << s[i];
    }


    return 0;
}