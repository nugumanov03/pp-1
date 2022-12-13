#include<iostream>
#include<algorithm>

using namespace std;

int main(){
    string s = "321";
    sort(s.begin(), s.end());
    cout << s<< endl;
    while(next_permutation(s.begin(),s.end())){
        cout << s << endl;
    }


    return 0;
}