#include<iostream>

using namespace std;

int main(){
    int n;
    cin >> n;
    int a[n];
    for(int i= 0;i < n;i++){
        cin >> a[i];
    }
    //ai
    int cnt = 0;
    // int sum = 0;
    for(int i =0 ;i < n;i++){
        if( (a[i] > 0 && a[i+1] < 0) || (a[i] < 0 && a[i+1] > 0) ){// prev a[i-1] -> next a[i+1]
          cout << "YES";
          return 0;
        }
    }
    cout << "NO";

    return 0;
}
