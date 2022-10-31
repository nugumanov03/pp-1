#include<iostream>
#include<algorithm>
#include<string>

using namespace std;

int main(){
    int n,m;
    cin >> n >> m;
    int arr[n];
    int position;
    for(int i = 0; i < n;i++){
        cin >> arr[i];
    }
    
    for(int i = 0 ; i < n; i++){
        if (m < arr[i]){
            position = i;
            break;
        }
    }
    
    if( m > arr[n-1]){
        position = n;
    }
    cout << position;

    return 0;
}