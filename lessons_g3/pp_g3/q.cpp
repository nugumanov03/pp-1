#include<iostream>

using namespace std;

int main(){
    string s1 ,s2;
    cin >> s1 >> s2;
    string s3 = "";
    bool flag = false;
    int kol = s2.size() / s1.size();
    for(int i = 0;i < kol;i++){
        s3 += s1;
    }
    if(s3 == s2){
        flag = true;
    }
    
    if(flag){
        cout << "YES";
    }else cout << "NO";

    return 0;
}