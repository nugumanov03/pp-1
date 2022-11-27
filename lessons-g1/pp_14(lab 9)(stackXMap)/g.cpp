#include<iostream>
#include<stack>
#include<algorithm>

using namespace std;

int main(){
    string s;
    cin >> s;
    stack <char> st;
    reverse(s.begin() , s.end());
    for(int i = 0; i < s.size();i++){
        if(st.empty()){
            st.push(s[i]);
        }else if(s[i] == '1' && st.top() =='1'){
           st.pop();
        }else{
            st.push(s[i]);
        }
    }
    // 1110011
    // 001
    // string ste = "";
    while(!st.empty()){
        // ste+= st.top();
        cout << st.top();
        st.pop();
    }
    // for(int i = ste.size()-1 ; i >= 0;i--){
    //     cout << ste[i];
    // }
    return 0;
}