#include<iostream>
#include<algorithm>


using namespace std;

int main(){
    int n;
    cin >> n;
    int a[n];
    for(int i = 0; i < n;i++){
        cin >> a[i];
    }
    string st = "";
    for(int i = 0; i < n;i++){
        string vrem = "";
        int c = a[i];
        while( c > 0){
            int k = c%10;
            if(k != 0){
                vrem+= char(k+48);
            }
            c/=10;
        }
        reverse(vrem.begin() , vrem.end());
        // cout << vrem << "\n";
        st+=vrem;
    }
    // cout << st << "\n";
    bool flag = true;
    for(int i = 0 ; i < st.size() /2 ;i++){
        if(st[i] != st[st.size()-1-i]){
            flag = false;
            // cout << i << " NO" <<endl; 
        }
    }
    if(flag){
        cout << "YES";
    }else cout << "NO";

    return 0;
}

