#include<iostream>
#include<cmath>

using namespace std;

int main(){
    int n;
    cin >> n;
    bool flag;
    // for(int i = 2;i < n;i++){
    //     if(n%i == 0){
    //         flag = false;
    //         break;
    //     }
    // }

    for(int i =1;i< n;i++){
        flag = true;
        for(int j = 2;j < i;j++){
            if(i % j == 0){
                // cout << i <<" is prime\n";
                flag = false;
            }
        }
        if(flag == true){
            cout << i <<" is prime\n";
        }
    }



    return 0;
}