#include<iostream>

using namespace std;

bool check(string s,int x){
    int cnt = 0;
    int max = -123;
    for(int i = 0; i < s.size();i++){
        
        if(s[i] <= '9' && s[i] >= '0'){
            cnt++;
            if(cnt >= x){
                return true;
            }
        }else if((s[i] <= '9' && s[i] >= '0'))max = (int)s[i];
    }
    // cout << cnt;
  
    return false;

}

int main(){
    string s;
    cin >> s;
    int x;
    cin>> x;
    if(check(s , x)){
        cout << "Valid";
    }else cout << "Not valid";

    return 0;
}