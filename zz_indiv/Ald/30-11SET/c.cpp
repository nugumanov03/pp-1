#include<iostream>
#include<set>

using namespace std;

int main(){
    int n;
    cin >> n;
    set <int> s;
    for(int i = 0 ; i < n;i++){
        int k;
        cin >> k;
        s.insert(k);
    }
    set <int> :: iterator it = s.begin();
    for(it ; it != s.end(); it++){
        int n;
        if(*it %2 != 0){
            cout << *it << " ";
        }
    }
    return 0;
}