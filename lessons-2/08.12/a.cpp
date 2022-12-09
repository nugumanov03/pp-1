#include<iostream>
#include<algorithm>
#include<cmath>
#include<vector>

using namespace std;

int x = -1;
long long mygen(){
    x++;
    long long xx = 1;
    for(int i = 0;i < x;i++){
        xx*=x ;
    }
    return xx;
}

int main(){
    int n;
    cin >> n; //5
    vector <long long> vt(n+1);

    generate(vt.begin() , vt.end() , mygen);
    for(int i = 0;i < n+1;i++){
        cout << vt[i] << "\n";
    }


    return 0;
}