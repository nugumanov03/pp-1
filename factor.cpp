#include <bits/stdc++.h>

using namespace std;
long long x = 1;
long long k = 1;
// long long factor(long long n){
//     if(n == 0){
//         return 1;
//     }
//     return factor(n-1) * n;
// }

// bool isSq(long long n){
//     int k = sqrt(n);
//     if(k * k == n)return true;
//     return false;
// }
long long gen(){
    x = x * (k+1);
    k++;
    return x;
}   
long long l = 1;
int c = 1000000;
long long gen2(){
    l = c* c;
    c++;
    return l;
}

// y^2 = x! + 1;

int main(){
    int n;
    cin >> n;
    long long k;
    // cin >> k;
    vector <long long> vt(n+1);
    generate(vt.begin() ,vt.end() , gen);

    // vector <long long> vt2(k+1);
    // generate(vt2.begin() ,vt2.end() , gen2);

    // for(int i = 0; i < k ;i++){
    //     cout << vt2[i] << endl;
    // }
    for(int i = 0 ; i < n;i++){
        cout << vt[i] << endl;
        // for(int j = 1; j < k;j++){
        //     if(vt[i] ==  vt2[j] - 1 ){
        //           cout << vt[i] << " " << j << endl;
        //     }
        // }
    }
    // for(int j = 1; j < 100000;j++){
    //     for(int i = 1;i < 15;i++){
    //         if(factor(i) == j*j -1 ){
    //             cout << i << " " << j << endl;
    //         }
    //     }
    // }
    
    return 0;
}


// y^2 = x! + 1;
// y , x -> Z 