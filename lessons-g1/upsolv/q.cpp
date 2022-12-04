#include<iostream>
#include<algorithm>

using namespace std;

int main(){
    int n;
    cin >> n;
    string ans="";
    for(int l = 0;l < n;l++){

        string s;
        cin >> s;
        string t = "@gmail.com";
        for(int i = 0; i < s.size();i++){
            int cnt = 0;
            for(int j = 0 ; j < t.size();j++){
                if(s[i+j] == t[j]){
                    cnt++;
                }else{
                    cnt = 0;
                }
                if(cnt == t.size()-1){
                    for(int c = 0;c < s.size()-t.size();c++){
                        ans+= s[c];
                    }
                    ans+="\n";
                    // ans = "ad\nasdfg213\n"
                    // cout << "YES" << l << endl;
                }
            }
        }
    // }else{
    //     cout << "error";
    // }
    }
    cout << ans;
    
    return 0;
}