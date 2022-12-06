// #include<iostream>
#include<bits/stdc++.h>
// #include<set>

using namespace std;

int main(){
    set <int> s;
    s.insert(15);
    s.insert(21);
    s.insert(15);
    s.insert(3);
    // s= {3 , 15 ,21 }
    set <int> :: iterator it = s.begin();
    for(; it != s.end(); it++){
        cout << *it << " ";
    }
    // it s.end();
    it = s.begin();
    for(; it != s.end(); it++){
        cout << *it * 2 << " ";
    }
    cout << *it;

    return 0;
}

