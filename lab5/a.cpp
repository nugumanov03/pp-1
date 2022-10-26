
char a = 'a';
int ia = (int)a; 
int x = (int)a - 48;
int x = a - '0';  // The (int) cast is not necessary.
char x1 = x;
#include<iostream>
// #include<string>

using namespace std;

// string s = "Hello World";
// cin>> s;
// for(int i = 0;i < s.size();i++ ){
//     cout << s[i] << " ";
// }
int main(){
    string s;
    cin >> s;
    // getline(cin ,s);
    int cnt = 0 ,cnt2 = 0;
    for(int i = 0; i < s.size();i++){
        char sim1 = s[i];
        int sim = sim1;
        // cout << sim << " ";
        // isupper()
        if( s[i] <= 'Z' && s[i] >='A'){
            cnt++;
        }else{ cnt2++;}

    }

    cout << cnt2 << " " << cnt;




    return 0;
}



