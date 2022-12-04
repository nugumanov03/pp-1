#include<iostream>

using namespace std;

int main(){ 
    string st;
    cin >> st;
    int sum = 0;
    for(int i =0; i < st.size();i++){
        sum+=st[i];
    }
    cout << ((sum > 300) ? "It is tasty!" : "Oh, no!");
    // if(sum > 300) cout << "It is tasty!";
    // else cout << "Oh, no!";
    return 0;
}