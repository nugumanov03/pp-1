#include<iostream>

using namespace std;

int main(){
    int m;
    cin >> m;
    for(int c =0 ; c < m;c++){
        int n;
        cin >> n;
        int a[n];
        for(int i = 0; i< n;i++){
            cin >> a[i];
        }
        bool flag = true;
        int ind[3];
        int maxi = a[0],pos;
        for(int i = 1; i < n-1;i++){
            if(a[i] > maxi){
                maxi = a[i];
                pos = i+1;
            }
        }
        cout << pos << " :Max\n";
        if( pos == 1 || pos == n){
            int maxi2 = -123;
            for(int i = 1; i < n-1;i++){
               if(a[i] > maxi2 && a[i] != maxi){
                    maxi2 = a[i];
                    pos = i+1;
                }
                if(pos == 1 || pos == n) flag = false;
                else flag = true ;break;
            }
        }
        if(!flag) cout << "NO\n";
        else{
            cout << "YES\n";
            cout << pos-1<< " " << pos<<" " << pos+1 << endl;
        }
    }
    return 0;
}
