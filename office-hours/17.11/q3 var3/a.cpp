#include<iostream>
#include<cmath>
#include<algorithm>

using namespace std;

int main(){
    int n;
    cin >> n;
    int coor[n][4];
    for(int i = 0;i < n;i++){
        cin >> coor[i][0] >> coor[i][1] >> coor[i][2] >> coor[i][3];
    }
    float lengs[n];
    for(int i = 0; i< n ;i++){
        lengs[i] = pow((coor[i][2]-coor[i][0]),2) + pow((coor[i][3]-coor[i][1]),2);
    }
    sort(lengs , lengs + n);
    int cnt =0;
    for(int i = 0;i < n;i++){
        if(lengs[i] != lengs[i+1]){
            cnt++;
        }
    }
    cout << cnt;
    return 0;
}