#include<iostream>

using namespace std;

int main(){
    int n , m;
    cin >> n >> m;
    int a[n][m];
    int sumrows[n], sumcolums[m];
    for(int i = 0; i < n;i++){
        for(int j = 0; j < m;j++){
            cin >> a[i][j];
        }
    }
    // ai
    for(int i = 0; i < n;i++){
       int linesum = 0;
        for(int j = 0; j < m;j++){
            linesum += a[i][j];
        }
        //  for i = 1 -> line sum : 17
        // cout << linesum << endl;
        sumrows[i] = linesum;
        // sumrows[1] = linesum : 17
    }

    
    for(int i = 0;i < n;i++){
        cout << sumrows[i] <<" ";
    }
    // sumrows[n] = { 13 , 17 , 104}



    
     for(int j = 0; j < m;j++){
       int linesum = 0;
        for(int i = 0; i < n;i++){
            linesum += a[i][j];
        }
        // cout << minlinesum << endl;
        sumcolums[j] = linesum;
    }

    //  sumrows[n]; sumcolumns[m];

    for(int i =0;i < n; i++){
        cout << "The sum of row number " << i+1 << " is " <<  sumrows[i] << endl;
    }
    for(int j = 0; j < m;j++){
        cout << "The sum of column number " << j+1 << " is " <<  sumcolums[j] << endl;
    }

    // cout << line;

    return 0;
}