#include<iostream>
#include<set>
#include<unordered_set>

using namespace std;

int main(){
    int n;
    cin >> n;
    unordered_set <int> s;
    for(int i = 0;i < n;i++){
        int x;
        cin >> x;
        s.insert(x);
    }
    // s.size() -Dlina set'a
    for(unordered_set <int> :: iterator it = s.begin(); it != s.end(); it++){
        cout << *it << " ";
    }

    return 0;
}