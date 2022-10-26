#include<iostream>

using namespace std;

int main(){
    int n , m;
    cin >> n >> m;
    int a[n][m];
    for(int i = 0;i < n;i++){
        for(int j = 0; j < m;j++){
            cin >> a[i][j];
        }
    }
    // ai
    int mins[m][3];
    int sum = 0;
    for(int j = 0;j<m;j++){
        int minline = 12312424;
        for(int i = 0; i < n;i++){
            if(minline > a[i][j]){
                minline = a[i][j];
                mins[j][1] = i+1;
                mins[j][2] = j+1;
            }
        }
        sum += minline;
        mins[j][0] = minline;
    }


    // output
    cout << "coordinates of min elements:\n";
    for(int j = 0; j < m;j++){
        cout << mins[j][1] << ";" << mins[j][2] << endl ;
    }

    cout << "Their sum:\n"<< sum;


}