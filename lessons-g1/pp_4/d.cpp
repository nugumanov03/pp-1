#include<iostream>

using namespace std;

int main(){
    string s;
    int pos,max =-123123;
    getline(cin , s);
    int cnt = 0;
    for(int i = 0;i < s.size()+1;i++){
        cnt++;
        if(s[i] == ' '){
            if(max < cnt){
                max = cnt;
                pos = i -cnt;
            }
            cout << cnt << "\n";
            cnt = 0;
        } 
    }
    for(int i = pos+1;i < s.size();i++){
        if( s[i] == ' '){
            break;
        }
        cout << s[i];
    }
    cout << endl << max-1;


}