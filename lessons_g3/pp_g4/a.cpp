#include<iostream>
#include<algorithm>

using namespace std;

int main(){
    string s , st;
    cin >> s;
    st = s;
    int sum , cnt = 0;
    while(st.size() > 1){
        cnt++;
        sum = 0;
        for(int i = 0;i < st.size();i++){
            sum += st[i] - 48;
        }
        st = "";
        while(sum>0){
            int k = sum%10;
            st+=  k +48;
            sum/=10;
        }
        // reverse(st.begin(),st.end());
        // cout << st << endl;
    }
    cout << st << " ";
    cout << cnt;
    // for(int i = 0;i < 10;i++){
    //     cout << i[a] << " ";
    // }
    // // a[i] = *(a+i); 
        

    return 0;
}