#include<iostream>

using namespace std;

int main(){
    int n , a ,b ,c ,d;
    cin >> n >> a >> b >> c >>d;
    int arr[n];
    for(int i = 0 ; i< n;i++){
        arr[i] = i+1;
    }
    // arr[] = {1 , 2 ,3 ,4 ,5 ,6 ,7 ,8 ,9}
    // a = 3 ; b = 5
    // 
    for(int i = 0 ;i <= (b-a)/2 ;i++){
        swap(arr[a-1+i] , arr[b-1-i]);
    }
    // arr[]

    for(int i = 0;i <= (d-c)/2;i++){
        swap(arr[c-1+i] , arr[d-1-i]);
    }
    for(int i = 0;i < n;i++){
        cout << arr[i] << " ";
    }
    // for(int i = 1;i <= n;i++){
    //     cout << i
    // }

    return 0;
}