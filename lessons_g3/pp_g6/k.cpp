#include<iostream>

using namespace std;

char maxi(string s ,int pos , char max){
    if(pos == s.size()){
        return max;
    }
    if(max < s[pos]){
       return maxi(s , pos+1,s[pos]);
    }
    return maxi(s , pos+1,max);
}
// sort(s.begin() , s.end());
// cout << s[size()-1]
// a[n-1] - last
// a[n/2] - middle
// a[0] - first

int main(){
    string s;
    cin >> s;
    cout << maxi(s , 1 , s[0]);
}