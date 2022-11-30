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
    // ai
    // v[]
    // s[]
    int sum = 0;
    set <int> :: iterator it = s.begin();
    for(it ; it != s.end(); it++){
        sum += *it;
        cout << *it << " ";
    }
    cout << endl <<sum;
    return 0;
}