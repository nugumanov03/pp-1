#include<iostream>

using namespace std;

int main(){
    int n;
    cin >> n;
    int a[n],b[n];
    for(int i = 0;i < n;i++){
        cin >> a[i];
    }
    for(int i = 0;i < n;i++){
        cin >> b[i];
    }
    // ai
    int was[101] , was2[101];
    // 3 3 4 8
    for(int i = 0;i < 101;i++){
        was[i] = 0;
        was2[i] = 0;
    }
    // was[] = 000000...
    for(int i = 0; i < n;i++){
        was[a[i]]++;
        was2[b[i]]++;
    }
    // was[3] = 1
    // was[3] = 2
    // was[4] = 1
    // was[8] = 1
    // was[] = 0 0 0 2 1 0 0 0 1
    int cnt = 0;
    for(int i = 0; i < 101;i++){
        cnt+= min(was[i] , was2[i]);
    }
    cout << cnt << endl;
    for(int i = 0; i < 101;i++){
        cout << was[i] << " ";
    }
    cout << endl << endl;
    for(int i = 0; i < 101;i++){
        cout << was2[i] << " ";
    }


    return 0;
}