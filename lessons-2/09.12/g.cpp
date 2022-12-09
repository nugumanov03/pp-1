#include<iostream>

using namespace std;

int main(){
    int n , a ,b;
    cin >> n >> a >>b;
    string s;
    cin >> s;
    int cnt =0;
    for(int i =0 ;i < s.size();i++){
        if(s[i] > 'A' && s[i] < 'Z'){
            cnt++;
        }
    }
    if(a * cnt > b*(n - cnt)){
        cout << b*(n - cnt) ;
    }else cout << a * cnt;

    return 0;
}