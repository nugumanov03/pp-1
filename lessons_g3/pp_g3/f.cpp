#include<iostream>
#include<algorithm>

using namespace std;

int main(){
    string s;
    cin >> s;
    string s2 = s;
    sort(s2.begin(), s2.end());
    if(s2 == s){
        cout << "YES";
    }else cout << "NO";

    // for(int i = 0;i < s.size();i++){
    //     if(s[i] > s[i+1]){
    //         flag = false;
    //     }
    // }


    return 0;
}