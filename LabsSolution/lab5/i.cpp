#include<iostream>
#include<algorithm>

using namespace std;

int main(){
    string s , t;
    cin >> s >> t;
    bool boolka = true;
    // int arr[s.size()] , arr2[t.size()];
    sort(s.begin() , s.end());
    sort(t.begin() , t.end());
        for(int i = 0; i < s.size();i++){
        if(s[i] != t[i]){
            boolka = false;
        }
    }
    if (boolka){
        cout << "YES";
    }else{cout << "NO";}

}