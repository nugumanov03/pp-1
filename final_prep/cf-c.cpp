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
        bool flag = false;
        int ind[3];
        for(int i = 0;i < n;i++){
            for(int j = i+1 ;j < n;j++){
                if(a[i] < a[i+j]){
                    for(int k = j+1 ;k < n;k++){
                        if( a[j] > a[k]){
                            flag = true;
                            ind[0] = i + 1;
                            ind[1] = j + 1;
                            ind[2] = k + 1;
                            break;
                        }
                    }if(flag) break;
                }
            }if (flag) break;
        }
        if(!flag) cout << "NO\n";
        else{
            cout << "YES\n";
            cout << ind[0]<< " " << ind[1] <<" " << ind[2] << endl;
        }
    }
    return 0;
}