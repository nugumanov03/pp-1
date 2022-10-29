#include<iostream>
#include<algorithm>

using namespace std;

int main(){
    int n;
    cin >> n;
    int a[n];
    for(int i = 0;i < n;i++){
        cin >> a[i];
    }
    // ai
    // count unilkanih elemtov ->
    int cnt = 0;
    sort( a , a +n);
    // cout << n;
    // sort gives us array where same elements are closer to each other
    for(int i = 0;i < n;i++){
        if(a[i] != a[i+1]){
            cnt++;
        }
    }
    // cout << cnt << "\n";
    // cnt is count of unikalnih elemtov
    int unikal[cnt][2];
    for(int i = 0; i < cnt ; i++){
        unikal[i][1] = 0;
    }
    int k = 0; // k - is index of unikal array
    for(int i = 0;i <n+1 ;i++){
        if(a[i] != a[i+1]){
            unikal[k][0] = a[i];
            k++;
        }
    }
    // unikal elemtns array ;; 
    // for(int i = 0;i < cnt;i++){
    //     cout << unikal[i][0] << " " << unikal[i][1] << endl;
    // }
    for(int i = 0; i < n;i++){
        for(int j = 0; j < cnt;j++){
            if(a[i] == unikal[j][0]){
                unikal[j][1]++;
            }
        }
    }
    int max =-123123;
    for(int j = 0; j < cnt;j++){
        if(unikal[j][1] > max){
            max = unikal[j][1]; 
        }
    }
    // cout << max << "\n";

    for(int i = cnt - 1;i >= 0;i--){
        if(max == unikal[i][1]){
            cout << unikal[i][0] << " ";
        }
    }
    cout << endl;

    // for(int i = 0;i < cnt;i++){
    //     cout << unikal[i][0] << " " << unikal[i][1] << endl;
    // }


    return 0;
}