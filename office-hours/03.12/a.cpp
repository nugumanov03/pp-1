#include<iostream>
#include<map>
#include<vector>
#include<algorithm>
using namespace std;

int gcd(int a , int b){
    int num = min(a , b);
    while(!(a % num == 0 && b % num == 0)){
        num--;
    }
    return num;
}

int main(){ 
    int n ;
    cin >> n;
    vector <int> vt(n);
    vector <int> vt2;
    for(int i = 0;i < n;i++){
        cin >> vt[i];
    }
    for(int i = 0;i < n;i++){
        for(int j = i + 1; j < n;j++){
            vt2.push_back(gcd(vt[i],vt[j]));
        }
    }
    sort(vt2.begin(),vt2.end());
    cout << vt2[vt2.size()-1];
    return 0;
}