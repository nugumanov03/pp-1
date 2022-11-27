#include<iostream>

using namespace std;

int main(){
    string s;
    cin >> s;
    // ({(){}})
    // ( { ) } 
    // ( ( ( ( { { } } ) ) ) )
    stack <char> st;
    for(int i = 0; i < s.size() ; i++){
        if(st.empty()){
            st.push(s[i]);
        }else if(st.top() == '(' && s[i] == ')'){
            st.pop();
        }else{
            st.push(s[i]);
        }
    }   


    if(st.empty()) cout << "YES";
    else cout << "NO";
    string str = "";
    while(!st.empty()){
        str+=st.top();
        // cout << st.top();
        st.pop();
    }
    reverse(str.begin() , str.end());
    cout << str; 
    cout << "Yerke TOP";
    return 0;
}