#include<iostream>

using namespace std;

int main(){
    string s;
    cin >> s;
    char maxi = s[0] , mini = s[0];
    for(int i = 0; i < s.size();i++){
        maxi = max(maxi , s[i]);
        mini = min(mini , s[i]);
    }
    cout << maxi << " " << mini ;
}