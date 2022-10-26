#include<iostream>

using namespace std;

int main(){
    string s;
    cin >> s;
    // char min = 1;
    // cout << (char)min;
    char max = s[0];
    for(int i = 1;i < s.size();i++){
        // int num = s[i];
        // cout << max << "\n";
        // cout << s[i] << " ";
        if(max < s[i]){
            max = s[i];
        }
        // cout << max << "\n";
    }
    cout <<"\n" << max; 
    // cout << "Hello World";
    // while(){
    //     // code
    // }
    // Itekebiynta404

    return 0;
}