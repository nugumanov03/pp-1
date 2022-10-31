#include<iostream>

using namespace std;

int main(){
    string s;
    cin >> s ;
    bool boolka = false;
   
    char k = 'A';
    while( k >= 'A' && k <='z'){
        // cout << s + k << endl;
        string c = s+k;
        bool flag = true;
        for(int i = 0; i < c.size();i++){
            if(c[i] != c[c.size() - i -1]){
                flag = false;
            }
            
        }
        
        if(flag == true){
            boolka = true;
            break;
        }
        k++;
    }
    if(boolka == true){
        cout << "YES";
    }else{
        cout << "NO";
    }

    // int flag = 1;
    // for(int i = 0; i < s.size();i++){
    //     if(s[i] != s[s.size() - i -1]){
    //         flag = 0;
    //     }
    // }
    
    // if(flag == 1){
    //     cout << "YES";
    // }else {
    //     cout << "NO";
    // }
    return 0 ;
}