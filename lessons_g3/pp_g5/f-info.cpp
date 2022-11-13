#include<iostream>

using namespace std;

int main(){
    string s;
    getline(cin , s);
    int cnt =0;
    int max = 0;
    int pos = 0;
    for(int i = 0;i < s.size();i++){
        cnt++;
        if(s[i] == ' '){
            cnt--;
            cout <<cnt << " "; 
            if( max < cnt){
                max = cnt;
                pos = i-cnt;
            }
            cnt = 0; 
            cout << endl;
        }
    }   
    for(int i = pos;i < pos+max;i++){
        cout << s[i];
    }
    cout <<endl<< max;

    return 0;
}