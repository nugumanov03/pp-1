#include<iostream>

using namespace std;

int main(){
    int n;
    cin >>n;
     //A, B, C, E, H, K, M, O, P, T, X, Y.
    char bukvi[12] = {'A' , 'B' , 'C' , 'E' , 'H' , 'K' , 'M' , 'O' , 'P' , 'T' , 'X' , 'Y'};
    string a[n];
    for(int i =0;i < n;i++){
        cin >> a[i];
    }
    for(int k = 0; k < n;k++){
        bool flag = true;
        string st = a[k];   
        if(st.size() > 6){
            flag = false;
        }
        bool flag2 = false , flag3 = false , flag4 = false;
        for(int i = 0;i<12;i++){
            if(st[0] == bukvi[i]){
                flag2 =true;
            }
            if(st[4] == bukvi[i]){
                flag3 = true;
            }
            if( st[5] == bukvi[i]){
                flag4 =true;
            }
        }
        if( !(flag2 && flag3 && flag4)){
            flag = false;
        }
        for(int i = 1;i< 4;i++){
            if( !(st[i] >= '0' && st[i] <= '9')){
                flag = false;
            }
        }
        if(flag){
            cout << "YES\n";
        }else cout << "NO\n";
    }
    //
}