#include<iostream>
#include<vector>
#include<set>

using namespace std;    

int main(){
    int n;
    cin >> n;
    set <int> s;
    for(int i = 0;i < n ; i++){
        int k;
        cin >> k;
        s.insert(k);
    }
    cout << s.size() << endl;
    for(auto it = s.begin();it != s.end(); it++){
        cout << *it << " ";
    }


    return 0;
}