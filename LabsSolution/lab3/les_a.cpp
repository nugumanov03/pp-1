#include <iostream>

using namespace std;

int main(){
    int n , max = -123123;
    cin >> n;
    int arr[n][n];
    int cnt = 0;
    for(int i = 0;i < n;i++){
        for(int j =0 ; j < n;j++){
            cin >> arr[i][j];
        }
    }
    // All of my inputs;
    for(int i = 0;i < n;i++){
        for(int j =0 ; j < n;j++){
            if( max < arr[i][j]){
                max = arr[i][j];
            }
            // cout << arr[i][j] << " ";
        }
        // cout << endl;
    }
    cout << max;





    return 0;
}