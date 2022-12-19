#include<iostream>
#include<vector>

using namespace std;

int a[10000];

int main(){
    int n, maxi = -123123;
    cin >> n;
    vector < int > vt;
    for(int i = 0; i < n;i++){
        int k;
        cin >> k;
        maxi = max(maxi , k);
        for(int j = 0; j < k;j++){
            a[j] = i;
        }
    }
    int cnt = 0;
    for(int i = 0; i < maxi;i++){
        if(a[i] != a[i+1]) cnt++;
        // cout << a[i] << " ";
    }   
    cout << endl << cnt;
    
}