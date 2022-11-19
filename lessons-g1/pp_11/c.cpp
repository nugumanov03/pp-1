#include<iostream>
#include<algorithm>

using namespace std;

bool isPal(string s){
    string s2 = s;
    reverse(s2.begin(),s2.end());
    if(s2 == s) return true;
    else return false;
}

int main(){
    string s;
    cin >> s;
    bool flag = false;
    int k = 0;
    string s2 = "";
    while(true){
        s2 = "";
        int i = 0;
        while(true){
            s2+= s[k+i];
            i++;
            if(isPal(s2) && s2.size() >= 2){
                flag = true;
                break;
            }
            if( i == s.size()){
                break;
            }
        }    
        k++;
        if(flag){
            break;
        }
    }
    cout << s2;

    return 0;
}