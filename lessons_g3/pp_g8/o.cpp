#include<iostream>
#include<set>

using namespace std;

string toLower(string s){
    for(int i = 0; i < s.size();i++){
        s[i] = tolower(s[i]);
    }
    return s;
}

int main(){
    string s;
    cin >> s;
    set <char> ss;
    s = toLower(s);
    for(int i = 0;i < s.size();i++){
        ss.insert(s[i]);
    }
    cout<< ss.size() << " ";
    set <char> :: iterator it = ss.begin();
    for( it ;it != ss.end();it++){
        cout << *it << " ";
    }

}