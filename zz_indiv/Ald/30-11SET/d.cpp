#include<iostream>
#include<set>

using namespace std;

int main(){ 
    string s;
    cin >> s;
    for(int i = 0; i < s.size();i++){
        if(s[i] >= 'A' && s[i] <= 'Z'){
            s[i]+=32;
        }
    }
    set <char> se;
    for(int i = 0; i < s.size();i++){
        se.insert(s[i]);
    }
    cout << se.size() << endl;
    set <char> :: iterator it = se.begin();
    for(it ; it != se.end(); it++){
        cout << *it << " ";
    }

    return 0;
}