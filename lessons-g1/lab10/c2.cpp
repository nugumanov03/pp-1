#include<iostream>
#include<stack>
#include<cmath>

using namespace std;

// 16 ; 25 ; 36 ;49; 64 ; 81

bool isSq(int n){
    int k = sqrt(n);    
    if(k * k == n){
        return true;
    }
    return false;
}


int main(){
    string s;
    cin >> s;
    stack <char> st;
    for(int i = 0;i < s.size();i++){
        if(st.empty()){
            st.push(s[i]);
        }else{
            int k = (int)(st.top()-48) * 10 + (int)(s[i]-48);
            if(isSq(k)){
                st.pop();
            }else{
                 st.push(s[i]);
            }
        }
    }
    if(st.empty()){
        cout << "Stack is empty";
        return 0;
    }
    while(!st.empty()){
        cout << st.top();
        st.pop();
    }
   



    return 0;
}