#include<iostream>

using namespace std;

int main(){
    long long a , b;
    cin >> a >> b;
    bool flag = true;
    int cnt = 0;
    if( a < b){
        while(a != b){
            a*=2;
            if( a > b){
                flag = false;
                break;
            }
            cnt++;
        }
    }else{
        while(a != b){
            a/=2;
            if( a < b){
                flag = false;
                break;
            }
            cnt--;
        }
    }
    if(flag){
        cout << "YES " << cnt;
    }else cout << "NO " ;

    return 0;
}