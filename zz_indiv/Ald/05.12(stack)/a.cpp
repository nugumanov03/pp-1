#include<iostream>
#include<stack>

using namespace std;

int main(){ 
    stack <int > st;
    st.push(5);
    st.push(10);
    st.push(21);
    st.push(3);
    cout << st.top(); 
    // 5 10 21 3
    st.pop();
    cout << st.top(); 
    st.pop();
    cout << st.top(); 
    // 5 10     
    cout << st.size();

    return 0;
}

