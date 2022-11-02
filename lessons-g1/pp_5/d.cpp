#include<iostream>

using namespace std;

int main(){
    string s;
    cin >>s;
    string s2;
    cin >> s2;
    int cnt;
    int glob_cnt = 0;

    string s3 = s2 + s2[s2.size()-1]; 
    for(int i = 1; i < s3.size();i++){   
        s3[i] = s2[i-1];
    }
    s3[0] = s2[s2.size()-1];
    string s4;
    s4 = "    ";
    cout << s3 << endl;
    for(int i = 0;i < s3.size()-1;i++){
        s4[i] = s3[i];
    }
    cout << s4 << endl;

    for(int i =0;i < s.size();i++){
        cnt= 0;
        for(int j = 0;j<s2.size();j++){
            if(s[i+j] == s2[j]){
                cnt++;
            }
            if(cnt == s2.size()){
                glob_cnt++;
            }
        }
    }

    cout << glob_cnt;
    return 0;
}