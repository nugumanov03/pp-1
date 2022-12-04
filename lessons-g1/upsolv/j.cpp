#include<iostream>
#include<algorithm>

using namespace std;
bool isPal(string s){
    string g = s;
    reverse(g.begin() ,g.end());
    if(s==g) return true;
    return false;
}

int main(){
    string s;
    cin >> s;
    if(!isPal(s)){
        cout << s.size();
    }else{
        bool flag = true;
        for(int i = 0 ; i< s.size()-1;i++){
            if(s[i] != s[i+1]){
                flag = false;
            }
        }
        if(flag){
            cout << 0;
        }else cout << s.size()-1;
    }    return 0;
    
}