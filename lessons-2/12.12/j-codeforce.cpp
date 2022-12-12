#include<iostream>
#include<map>
#include<set>

using namespace std;

int main(){ 
    int n;
    cin >> n;
    set < pair < string , string  > > ss;
    for(int i = 0; i < n;i++){
        string st , st2;
        pair < string , string > pr;
        cin >> pr.first >> pr.second;
        ss.insert(pr);
        // mp[make_pair(st , st2)]++;
    }
    cout << ss.size();

    return 0;
}



// anu - 3 + 
// sau - 2 + 
// aid - 2 +
// golden moon - 0 + 