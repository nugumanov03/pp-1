#include<iostream>

using namespace std;

int main(){
    string s;
    cin >> s;
    int cnt =0,max = -1;
    char ans;
    for(int i = 0;i < s.size();i++){
        if(s[i] == s[i+1]){
            cnt++;
        }else{
            cnt = 0;
        }
        if(max < cnt){
            max = cnt;
            ans = s[i];
        }
    }
    cout << ans << " " << max + 1;
    
    return 0;
}