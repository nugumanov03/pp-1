#include<iostream>
#include<set>
#include<set>

using namespace std;

int main(){
    string s;
    cin >> s;
    set <char> ss;
    // s.size() -Dlina set'a
    for(int i = 0 ; i < s.size();i++){
        if( s[i] >= 'A' && s[i] <= 'Z'){
            s[i]+=32;
        }
        ss.insert(s[i]);
    }
    cout << ss.size()<< endl;
    for(set <char> :: iterator it = ss.begin(); it != ss.end(); it++){
        cout << *it << " ";
    }

    return 0;
}