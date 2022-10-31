#include<iostream>

using namespace std;

int main(){
    int a;
    cin >> a;
    int cnt = 0;
    for(int i=0;i < a;i++){
        int b;
        cin >> b;
        if(b%2==1){
            cnt++;
            }
    }


    cout << a- cnt << " " << cnt << endl;

    return 0;
}