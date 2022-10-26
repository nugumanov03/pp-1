#include<iostream>

int main(){
    string s;
    cin >> s;
    int cnt = 0;
    for(int i = 0; i < s.size();i++){
        if( s[i] == '7' || s[i] == '4'){
            cnt++;
        }
    }
    if(cnt == 4 || cnt == 7){
        cout << "YES";
    }else cout << "NO";  



    // int cnt = 0;
    // while(n>0){
    //     int k = n%10;
    //     if(k==7 || k == 4){
    //         cnt++;
    //     }
    //     n/=10
    // }

    // if(cnt == 4 || cnt == 7){
    //     cout << "YES";
    // }else cout << "NO";



    return 0;
}