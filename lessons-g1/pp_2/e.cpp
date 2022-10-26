#include<iostream>
#include<algorithm>

using namespace std;

int main(){
    int n , m , pos;
    cin>>n >> m;
    int a[n][m];
    for(int i = 0; i < n;i++){
        for(int j = 0; j < m;j++){
            cin >> a[i][j];
        }
    }
    // ai
    int sum_array[n][2];
    for(int i = 0;i < n;i++){
        sum_array[i][1] = 0;
    }
    // sum[0][0] = 15; sum[0][1] = 0

    int max = a[0][0];
    for(int i = 0; i < n;i++){
        int linesum = 0;
        for(int j = 0; j < m;j++){
            if(max < a[i][j]){
                max = a[i][j];
            }
            linesum+=a[i][j];
        }
        sum_array[i][0] = linesum;
    }
    // 
    for(int i = 0; i < n;i++){
        for(int j = 0; j < m;j++){
            if(max == a[i][j]){
                sum_array[i][1] = 1;
            }
        }
    }
    // 
    int maximum = -123123,cnt =0;
    for(int i = 0; i < n ;i++){
        if(sum_array[i][1] == 1){
                cnt++;
        }
        
    }
    cout << cnt << endl;
    for(int i = 0; i < n ;i++){
        if(sum_array[i][1] == 1){
           cout << i << " ";
        }
        
    }
    // int winners[cnt];
    // int k = 0;
    // for(int  i= 0 ; i < n;i++){   
    //     if(sum_array[i][1] == 1){
    //         winners[k] = i;
    //         k++;
    //     }
    // }
    // cout << cnt << endl;
    // sort(winners , winners + n);
    // for(int i = 0; i < cnt;i++){
    //     cout << winners[i] << " ";
    // }
    
    
    



    return 0;
}