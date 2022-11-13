#include<iostream>

using namespace std;

bool isdigit(char x){
    if(x <= '9' && x>= '0'){
        return true;
    }
    return false;
}
int toDig(char x){
    return (int)x- 48;
}
int main(){
    string s;
    cin >> s;
    int x ;
    cin >> x;
    int cnt = 0;
    bool flag = false;
    for(int i = 0;i < s.size();i++){
        if(isdigit(s[i])){
            if(x == 1){
                flag = true;
                break;
            }
            if(isdigit(s[i+1])){
                if(toDig(s[i]) + 1 == toDig(s[i+1]) ||toDig(s[i]) - 1 == toDig(s[i+1]) )
                cnt++;
                if(cnt+1 == x){
                flag = true;
                break;
             }
            }
        }
        
    }

    if(flag){
        cout << "Valid";
    }else cout << "Not valid";
}