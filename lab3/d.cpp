#include<iostream>

using namespace std;

int main(){
    int n;
    cin >> n;
    int arr[n];
    int ans;
    for (int i = 0; i <n; i++)
    {
       cin >> arr[i];
    }
    int max = -123123;
    for (int i = 0; i <n; i++)
    {
       if(max < arr[i]){
        max = arr[i];
        ans = i+1;
       }
    }
    cout << ans;
    return 0;
}