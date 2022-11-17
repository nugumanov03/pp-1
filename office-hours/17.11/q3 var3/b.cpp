#include<iostream>

using namespace std;

int main(){ 
    int n;
    cin >> n;
    int x;
    cin >> x;
    int a[n];
    for(int i = 0; i < n;i++){
        cin >> a[i];
    }
    // ai
    for(int i = 0;i < n;i++){
        for(int j = i+1;j < n;j++){
            if(a[i] + a[j] == x){
                cout << "YES";
                return 0;
            }
        }
    }  
    cout << "NO";
    return 0;

    return 0;
}