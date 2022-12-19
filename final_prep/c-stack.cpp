#include<iostream>
#include<stack>

using namespace std;

int main(){
    int n;
    cin >> n;
    stack <int> st;
    st.push(0);
    for(int i = 0; i < n;i++){
        int k;
        cin >> k;   
        while ( k >= st.top()){
            st.pop();
            if(st.empty()) break;
        }
        st.push(k);
    }
    cout << st.size();
    return 0;
}