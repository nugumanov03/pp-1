#include<iostream>

using namespace std;

char maxdig(string s,int i,char max){
    if(i == s.size()){
        return max;
    }   
    if( s[i] > max){
        max = s[i];
    }
    return maxdig( s, i + 1 , max);
}
// mx("1249" , 0 , '0') => mx("1249" , 1 , '1') => mx("1249" , 2 , '2')
// mx("1249" , 3 , '4')=> mx("1249" , 4 , '9') ='9'

int main(){
    string s;
    cin >> s;
    cout << maxdig(s,0 ,'0');
    return 0;
}