
#include<iostream>

using namespace std;
// find();
int main(){
    string s , t;
    cin >> s >> t;
    int cnt = 0;
    // bool boolka = false;
    for(int i = 0; i < s.size();i++){
        for( int j = 0 ; j < t.size();j++ ){
            if(cnt == t.size()){
                break;
            }
            if(s[i+j] == t[j]){
                cnt++;
            }else{
                cnt = 0;
            }
        }
        if(cnt == t.size()){
                break;
            }
        // char sim1 = s[i];
        // int sim = sim1;
    }
    if(cnt == t.size()){
        cout << "YES";
    }   else { cout << "NO";}
    // cout << cnt;

    return 0;
}