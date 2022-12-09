#include<iostream>
#include<algorithm>

using namespace std;

int main(){
    string s;
    cin >> s;
    sort(s.begin() , s.end());
    cout << "The anagram variants for string cat are:\n";
    do{
        cout << s << endl;
    }while(next_permutation(s.begin() , s.end()));


    return 0;
}