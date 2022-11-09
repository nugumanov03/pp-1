#include<iostream>
#include<algorithm>

using namespace std;

int main(){
    int n;
    cin >> n;
    int a[n];
    for(int i = 0; i < n;i++){
        cin >> a[i];
    }
    // ai

    // buble sort
    // for(int i = 0;i< n;i++){
    //     for(int j = i+1; j < n;j++){
    //         if(a[i] > a[j]){
    //             swap(a[i] , a[j]);
    //         }
    //     }
    // }

    sort( a , a +n);
    
    // a[n] : a[n-1] - a[0]

    // reverse(a , a+n);

    for(int i = 0; i < n;i++){
        cout << a[i] << " ";
    }


    return 0;
}