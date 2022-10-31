#include<iostream>

using namespace std;

int main(){
    int n;
    cin >> n;
    string a[n];
    for(int i = 0;i < n;i++){
        cin >> a[i];
    }
    // ai
    cout << endl;
    // for(int i = 0; i < n;i++){
    //     cout << a[i] << "\n";
    // }
    for(int i = 0; i < n;i++){
        bool flag = false;
        string st1 = a[i];
        //  A, B, C, E, H, K, M, O, P, T, X, Y
        if( !(isupper(st1[0]))){
            flag = true;
        }
        if( !(isdigit(st1[1]) && isdigit(st1[2]) && isdigit(st1[3])) ){
            flag =true;
        }
        if( ! (isupper(st1[4]) && isupper(st1[5]))){
            flag = true;
        }
        if(flag){
            cout << "YES\n";
        }else cout << "NO\n";
    }
    return 0;





    return 0;
}