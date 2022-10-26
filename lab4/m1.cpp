#include<iostream>

using namespace std;


int main(){
    int n;
    cin >> n;
    int arr[n][n];
    int k = 1;
    int colstart = 0;
    int colend = n-1;
    int rowstart = 0;
    int rowend = n-1;
    while ( rowstart < rowend && colstart < colend){

        for(int j = colstart; j < colend + 1;j++){
            arr[rowstart][j] = k;
            k++;
        }
        rowstart++;
        for(int i = rowstart ; i < rowend+1;i++){
            arr[i][colend] = k;
            k++;
        }   
        colend--;
        // colstart++;

        for(int j = colend; j >= colstart;j--){
            arr[rowend][j] = k;
            k++;
        }
        rowend--;

        for(int i = rowend ; i >= rowstart;i--){
            arr[i][colstart] = k;
            k++;
        }
        colstart++;
    }

    if(n %2 == 1){
        arr[n/2][n/2] =  n* n;
    }


    for(int i = 0;i < n;i++){
        for(int j = 0; j < n;j++){
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}