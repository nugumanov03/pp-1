#include<bits/stdc++.h>

using namespace std;

int main(){ 
    queue <int> q; // FIFO
    // deque <int> deq; //  
    string s;
    cin >> s;
    // reverse(s.begin() , s.end());
    stack <char> st; // kak posude FILO
    for(int i =0;i < s.size();i++){
        if(st.empty()){
            st.push(s[i]);
        }else if(st.top() == '1' && s[i] == '1'){
            st.pop();
        }else{
            st.push(s[i]);
        }
    }
    if(st.empty()){
        cout << "Empty!";   
        return 0;
    }
    string stt = "";
    while(!st.empty()){
        // cout << st.top();
        stt+= st.top();
        st.pop();
    }
    reverse(stt.begin() , stt.end());
    cout << stt;
    return 0;
}