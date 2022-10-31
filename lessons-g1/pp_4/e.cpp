#include<iostream>

using namespace std;

int main(){
    string s;
    cin >> s;

    int was[128];
    for(int i = 0;i < 128;i++){
        was[i] = 0;
    }
    for(int i = 0;i < s.size() ; i++){
        int num = (int)s[i]; 
        // cout << s[i];
        was[num]++;
    }
    for(int i = 0; i < 128;i++){
        // if(was[i] == 2){
        //     cout << (char)i;
        // }
        cout << was[i] << " ";
    }


    return 0;
}