#include<iostream>
#include<stack>
#include<vector>

using namespace std;
#define f first
#define s second
int main(){
    int n ;
    cin >> n;
    for(int c = 0 ; c < n;c++){
        stack < pair <int , int > >  st;
        int m;
        cin >> m;
        int a[m];
        for(int i =0;i < m;i++){
            cin >> a[i];
        }
        for(int i =0;i < m;i++){
            if(st.empty() || st.pop){
                st.push(make_pair(a[i] , i));
            }else if(st.top().f < a[i] && a[i] > a[i+1]){
                st.push(make_pair(a[i] , i));
                st.push(make_pair(a[i] , i+1));
            }
        }
        if(st.size() >= 2){
            cout << "YES\n";
            vector <int> vt;
            while(!st.empty()){
                vt.push_back(st.top().s);
                st.pop();
            }
            for(int i = vt.size()-1;i>=0;i--){
                cout << vt[i] + 1    << " ";
            }   cout << endl;
        }
        else cout << "NO\n";
        
    }
    // 6 1 4 3 5 
}