// #include<ponti>
#include<iostream>

using namespace std;

int main(){
    string s1 = "abcdebcaa";
    string s2 = "bca";
    bool flag = false;
    for(int i = 0;i < s1.size();i++){
        int cnt = 0;
        for(int j = 0;j < s2.size();j++){
            if( s1[i+j] == s2[j]){
                cnt++;
            }
            // cout << cnt << " " << s1[i+j] << " " << s2[j] << "\n";
            if(cnt == s2.size()){
                flag = true;
                break;
            }
        }
        if(flag){
            break;
        }
        // cout << endl;
    }
    if(flag){
        cout << endl << "YES";
    }else cout << "NO";
    
}