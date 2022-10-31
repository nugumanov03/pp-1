#include<iostream>

using namespace std;

int main(){
    // string s;
    // cin >> s;
    // dlina stroki => s.size();
    // elementi s["index"] <=> elementi stroki chari ;
    char k;
    cin >> k;
    cout << k << endl;

    // char k = 'A'; // from char to int
    // int k_num = k;

    // int k = 65; // from int to char
    // char k_ch = k;

    int k = (int)'A'; // from char to int ->srazu (int) perevetet
    char k = (char)65; // from int to char k = 'A';


    cout << (char)(k-32);
    
    // s[2] = k;
    // for(int i = 0;i < s.size();i++){
    //     cout << s[i] << " ";
    // }
    
    // toupper()
    // isupper()
    // isdigit()
    // isalpha()




    return 0;
}