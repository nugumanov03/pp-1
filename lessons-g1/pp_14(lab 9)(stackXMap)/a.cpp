#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin>>s;
    stack<char> st;
    //  1 2 3 90 
    for(int i=0; i<s.size(); i++){
        if(st.empty()){
            st.push(s[i]);
        }
        else if( st.top() == '(' and s[i] == ')'){
            st.pop();
        }
        else{
            st.push(s[i]);
        }
    }
    
    if(st.empty()) cout<<"YES";
    else cout << "NO";
}