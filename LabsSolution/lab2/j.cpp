#include<iostream>

using namespace std;

int main(){
    int a;
    cin >> a;
    int cnt = 0;
    for(int i = 0; i < a; i++){
        int b;
        cin >> b;
        while(b > 1){
            if(b%10==0){
                cnt++;
            }
            b=b/10;
        }   
        // Itekebiynta404
    }
    cout << cnt;
    return 0;
}