#include<iostream>

using namespace std;

int main(){
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i <n; i++)
    {
       cin >> arr[i];
    }
    // get inputs

    int max = -123123, posmin,posmax;
    int min = 124124;
    for (int i = 0; i <n; i++)
    {
       if(max < arr[i]){
        max = arr[i];
        posmax = i;
       }
       if(min > arr[i]){
        min = arr[i];
        posmin = i;
       }
    }
    // get min and max from array

    arr[posmax] = arr[posmin];
    // for (int i = 0; i <n; i++)
    // {
    //     if(arr[i] == max){
    //         arr[i] = min;
    //     }
    // }
    // change value 


    for (int i = 0; i <n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    // cout << max << " " << min ;
    return 0;
       
}