#include<iostream>

using namespace std;

int main(){
    string s1 ,s2;
    cin >> s1 >> s2;
    // sort(s1.begin() , s1.end());
    // sort(s2.begin() , s2.end());
    // if(s1 == s2){
    //     cout << "YES";
    // }else cout << "NO";
    int was[128] , was2[128];
    for(int i = 0;i< 128;i++){
        was[i] = 0;
        was2[i] = 0;
    }
    for(int i = 0;i < s1.size();i++){
        was[s1[i]]++;
    }
    for(int i = 0;i < s2.size();i++){
        was2[s2[i]]++;
    }
  
    bool flag = true;
    for(int i = 0; i < 128;i++){
        if(was[i] != was2[i]){
            flag = false;
        }
    }
    if(flag ){
        cout << "YES";
    }else cout << "NO";
}