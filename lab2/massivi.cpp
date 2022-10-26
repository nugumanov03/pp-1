#include<iostream>

using namespace std;

int main(){
    int arr[6] = {12 , 10 , 9 , 8 ,5 , 8};

    // for(int i = 0;i < 6;i++){
    //     arr[i] = i;
    // }

    int arr2[6] = {56 , 90 , 23 , 10 , 92 , 13};
        cout << arr2[6] << endl;

    arr[2] =  arr2[6];

    for(int i = 0 ; i < 6;i++){
        cout << arr[i] << " ";
    }

    



    return 0;
}