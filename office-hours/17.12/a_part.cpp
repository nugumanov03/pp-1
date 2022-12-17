#include<iostream>
#include<cmath>
#include<algorithm>
#include<vector>

#define f first
#define s second 
using namespace std;
//  24 1 : 34
int main(){
    int n ;
    cin >> n;
    
    vector < pair < string , string > > vt(n);
    for(int c = 0 ; c < n;c++){
        cin >> vt[c].f >> vt[c].s;
    }
    for(int c = 0 ;c < vt.size() ; c++){ 
        // reverse(vt[c].f.begin() , vt[c].f.end());
        // reverse(vt[c].s.begin() , vt[c].s.end());
        int s_num = 0 , t_num = 0;
        // cout << "NO ERROR1\n";
        for(int i = 0, k = 0 ; i < vt[c].f.size()  ; i++ , k++){
            s_num += (int)(vt[c].f[i]-48) * pow(10 , k);
        }
        for(int i = 0, k = 0 ; i < vt[c].s.size(); i++ , k++){
            t_num += (int)(vt[c].s[i]-48) * pow(10 , k);
        }
        if(vt[c].f.size() == 3) s_num++;
        if(vt[c].s.size() == 3) t_num++;

        int sum = s_num + t_num;
        // cout << sum <<" NO ERROR2\n";
        string st = "";
        while(sum > 0){
            st += (char)(sum%10 + 48);
            sum/=10;
        }
        // cout << st;
        int ans = 0;
        for(int i = 0 , k = st.size() -1; i < st.size();i++ , k--){
            ans+= (int)(st[i]-48) * pow(10 , k);
        }
        cout <<ans << endl;
    }    
}