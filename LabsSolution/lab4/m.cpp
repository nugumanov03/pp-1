#include<iostream>
#include<algorithm>

using namespace std;

int main(){
    int n;
    // cout << "enter num: ";
    cin >> n;
    int a[n][n];
    int k = 0;
    // for(int i = 0; i < n;i++){
    //     for ( int j = 0; j < n;j++){
    //         a[i][j] = k;
    //         k++;
    //     }
    // }
    
    int rowstart = 0;
    int rowend = n-1;

    int colstart = 0,colend = n-1;
    k = 1;
    while(rowstart < rowend && colstart < colend){
        for(int i = colstart; i <= colend;i++){
            // a[rowstart][i] = colstart;
            // cout << a[rowstart][i] << " ";
            a[rowstart][i] = k;
            k++;
        }
        rowstart = rowstart + 1;

        for( int i = rowstart; i <= rowend; i++){
            a[i][colend] = k;
            k++;
        }
        colend = colend -1;

        if(rowstart < rowend){
            for(int i = colend; i >= colstart; i--){
                a[rowend][i] = k;
                k++;
            }
            rowend = rowend - 1;
        }
        if( colstart < colend){
            for(int i = rowend; i >=rowstart;i--){
                a[i][colstart] = k;
                k++;
            }
            colstart= colstart + 1;
        }

    }
    // if(n %2 == 1){
    //     a[n/2][n/2] = n*n;
    // }
    cout << endl;
    for(int i = 0; i < n;i++){
        for(int j = 0; j < n;j++){
            cout << a[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}