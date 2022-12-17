#include<iostream>
#include<cmath>
#include<vector>

using namespace std;

int main(){
    int n;
    cin >> n;
    vector <int > vt(n);
    for(int c = 0; c < n;c++){
        string s , t;
        cin >> s >> t;
        int s_num = 0, t_num = 0;
        for(int i = 0 , k =  0; i < s.size();i++ , k++){
            s_num+= (int)(s[i]-48) * pow(10 , k);
        }
        for(int i = 0 , k =  0; i < t.size();i++ , k++){
            t_num+= (int)(t[i]-48) * pow(10 , k);
        }
        if(s.size() == 3) s_num++;
        if(t.size() == 3) t_num++;
        // cout << s_num << " " << t_num << endl;
        int sum = s_num + t_num ;
        int ans = 0;
        string st = "";
        for(st ; sum > 0;sum/=10){
            st+= (char)(sum%10 + 48);
        }
        for(int i = 0 , k = st.size() - 1; i < st.size(); k-- , i++){
            ans+= (int)(st[i]-48) * pow(10 , k);
        }
        vt[c] = ans;
    }
    for(int i  = 0 ;i  < vt.size();i++){
        cout << vt[i] << "\n";
    }
    return 0;
}