#include<iostream>

using namespace std;

int main(){
    string s1;
    cin >> s1;
    string s2;
    cin >> s2;
    int cnt;
    bool flag = false;
    for(int i = 0;i < s1.size();i++){
        cnt = 0;
        for(int j = 0;j < s2.size();j++){
            if(s1[i+j] == s2[j]){
                cnt++;
            }
        }
        // cout << cnt;
        // cout << s1[i+j] << " " <<  s2[j] << endl;
        if(cnt == s2.size()){
            flag = true;
            break;
        }
    }
    if(flag){
        cout << "Sovpadenie";
    }else cout << "Ne sovpadenie";
    
    return 0;
}