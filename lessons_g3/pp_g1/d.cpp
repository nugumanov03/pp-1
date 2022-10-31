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
    int unikal[cnt];
    int shetchiki[cnt];
    int k = 0; // k - is index of unikal array
    for(int i = 0;i <n+1 ;i++){
        if(a[i] != a[i+1]){
            unikal[k] = a[i];
            k++;
        }
    }

    for(int i = 0; i < cnt ; i++){
        shetchiki[i] = 0;
    }
    // unikal elemtns array ;; 
    // for(int i = 0;i < cnt;i++){
    //     cout << unikal[i][0] << " " << unikal[i][1] << endl;
    // }
    for(int i = 0; i < n;i++){
        for(int j = 0; j < cnt;j++){
            if(a[i] == unikal[j]){
                shetchiki[j]++;
            }
        }
    }
    int max =-123123;
    for(int j = 0; j < cnt;j++){
        if(shetchiki[j] > max){
            max = shetchiki[j]; 
        }
    }
    // cout << max << "\n";

    for(int i = cnt - 1;i >= 0;i--){
        if(max == shetchiki[i]){
            cout << unikal[i] << " ";
        }
    }
    cout << endl;

    // for(int i = 0;i < cnt;i++){
    //     cout << unikal[i][0] << " " << unikal[i][1] << endl;
    // }


    return 0;
}