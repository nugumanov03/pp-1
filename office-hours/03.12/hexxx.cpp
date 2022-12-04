#include<iostream>
#include<algorit hm>

using namespace std;

string dexToHex(int n){
    string ans = "";
    while(n > 0){
        int g = n%16; 
        char k;
        if(g >= 10){
            k = g- 10 + 'A';
        }else{
            k = g + 48;
        }
        ans += k;
        
        n/=16;
    }
    reverse(ans.begin() , ans.end());
    return ans;
}

int main(){ 
    int n;
    cin >> n;
    cout << dexToHex(n);

    return 0;
}