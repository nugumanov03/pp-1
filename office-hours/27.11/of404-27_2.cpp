#include<iostream>
using namespace std;


int main(){
    int n , m;
    cin >> n >> m;
    string a1[m];
    string a2[m];
    for(int i = 0 ; i < m;i++){
        cin >> a1[i];
    }
    for(int i = 0 ; i < m;i++){
        cin >> a2[i];
    }
    // 0111 || : !| 1000
    // 0001 && : !& 1110
    // 0110 ^ : !^ 1001
    // 1 0 1 0  : !a[1]
    // 0 1 0 1  : !a[2]
    // 0 0 1 1  : a[1]
    // 0 1 0 1  : a[2]
    int a;
    cin >> a;

    string anser[m];
    for(int i = 0; i < m;i++){
        string st = "";
        string st1 = a1[i];
        string st2 = a2[i];
        // cout << st1 << " " << st2;
        for(int j = 0;j < n;j++){
            int ans;
            int ch1 = (int)st1[j] - 48; 
            int ch2 = (int)st2[j] - 48;
             if( a == 0111){
                ans = ch1 | ch2; 
            }else if ( a == 0001){
                ans = ch1 & ch2; 
            }else if ( a == 0110){
                 ans =  ch1 ^ ch2; 
            }else if ( a == 1010){
                ans =  !ch1;
            
            }else if ( a == 0101){
                ans = ch2; ;
            }else if ( a == 1000){
                ans =  !(ch1 & ch2); 
            }else if ( a == 1001){
                ans = !(ch1 ^ ch2); 
            }
            ans+=48;
            st+= (char)ans;
            // cout << st2[j] << " ";
        }       
        anser[i] = st; 
        // cout << endl;
    }

    for(int i = 0; i < m;i++){
            cout << anser[i] << "\n";
    }






    
}