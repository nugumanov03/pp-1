// asdsad @ asdasd . asdasd
#include<iostream>

using namespace std;

bool isLow(char a){
    if( a <= 'z' && a>= 'a') return true;
    return false;
}

int main(){
    string s;
    cin >> s;
    bool flag = false;
    for(int i = 0; i < s.size();i++){
        if(isLow(s[i])){
          continue;
        }else if(s[i] == '@'){
            // cout << "YES1\n";
            for(int j = i+1; j < s.size();j++){
                if(isLow(s[j])){
                    continue;
                }else if(s[j] == '.'){
                    // cout << "YES2\n";
                    for(int k = j+1 ; k < s.size();k++){
                        if(isLow(s[k])){
                            flag = true;
                            continue;
                        }else{
                            flag = false;
                            break;
                        }
                    }
                }else if( s[j] == '@'){
                    flag = false;
                    break;
                }
            }
        }
    }

    if(flag ) cout << "YES";
    else cout << "NO";

    return 0;
}