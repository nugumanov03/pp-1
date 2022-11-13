#include<iostream>
#include<algorithm>

using namespace std;

int main(){
    int n;
    cin >> n;
    string st="";
    while(n > 0){
        int k = n%2;
        n = n / 2;  
        st += (char)(k+48);
        cout << k;
    }
    cout << endl;
    // 5 -> 5/2 = 2 + 1
    // 2/2 = 1 + 0
    // 1 /2 = 0 + 1
    // 1 0 1
    reverse(st.begin() , st.end());
    cout << st;
    return 0;
}