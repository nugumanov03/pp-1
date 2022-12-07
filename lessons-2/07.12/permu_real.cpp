#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;


bool pali(string s)
{
    string P = s;
    reverse(P.begin(), P.end());
    if (s == P) {
        return true;
    }
    else {
        return false;
    }
}
 
int main(){
    string s;
    cin>>s;
    bool flag = false;
    sort(s.begin(),s.end());
    do{
     if(pali(s)==true){
        flag = true;
        }
    }
    while(next_permutation(s.begin() , s.end()));
    // abc
    // acb
    // cab
    // cba
    // bca 
    // bac
    if(flag) cout<<"ZA WARUDO TOKI WO TOMARE";
    else   cout<<"JOJO";

    return 0;
    
}