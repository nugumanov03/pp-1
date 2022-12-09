#include <iostream>
#include <set>

using namespace std;


bool uni(int n){
    set <int> s;
    int cnt = 0;
    while(n>0){
        s.insert(n%10);
        n/=10;
        cnt++;
    }
    if (s.size() == cnt) return true;
    return false;
}
int main(){
    int n;
    cin >> n;
    n++;
    while(!uni(n)){
        n++;
    }
    cout << n;

    return 0;
}