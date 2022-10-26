#include<iostream>
#include<algorithm>
#include<string>

using namespace std;

int main(){
    int a;
    cin >> a;
    int arr[a];
    for(int i = 0; i < a;i++){
        cin >> arr[i];
    }
    sort(arr,arr+a);
    // reverse(arr , arr+a);
    // for(int i = n-1;i >=0;i--){
    //     cout << arr[i] << " ";
    // }
    for(int i = 0; i < a;i++){
        if(arr[i] == arr[i+1]){
            continue;
            // break;
        }
        cout << arr[i] << " ";
    }

    
    return 0;
}