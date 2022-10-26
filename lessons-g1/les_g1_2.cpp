#include<iostream>

using namespace std;

int main(){
    int n ;
    cin >> n;
    int arr[n];
    for(int i = 0; i < n;i++){
        cin >> arr[i];
    }
    // all inputs // ai
    int max = -12321;
    int min = 123123;
    for(int i = 0; i < n;i++){
        if( max < arr[i]){
            max = arr[i];
        }
        if( min > arr[i]){
            min = arr[i];
        }
    }
    // max i min ;
    for(int i = 0 ; i < n;i++){
        if(arr[i] == max){
            arr[i] = 6;
        }
    }
    
    for(int i = 0; i< n ; i++){
        cout << arr[i] << " ";
    }

}