#include<iostream>

using namespace std;

int main(){
    int n;
    cin >> n;
    int a[n];
    for(int i = 0;i <n;i++){
        cin >> a[i];
    }
    // ai
    int was[1001];
    for(int i = 0;i < 1001;i++){
        was[i] = 0;
    }
    for(int i = 0;i < n;i++){
        was[a[i]]++;
    }
    int max = -12312;
    for(int i = 0 ;i < 50;i++){
        if(max < was[i]){
            max = was[i];
        }
        // cout << was[i] << " "; 
    }
    for(int i = 0;i < 50;i++){
        if(max == was[i]){
            cout << i << " ";
        }
    }



    return 0;
}