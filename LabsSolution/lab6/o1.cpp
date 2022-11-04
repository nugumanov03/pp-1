#include<iostream>

using namespace std;

bool checker(int n){
    int s = n%10;
    int sum = 0;
    while(n>0){
        int k = n%10;
        sum+=k;
        n/=10;
    }
    if(sum%k==0){
        return true;
    }else return false;

}

int main(){
    int n;
    cin >> n;
    if(checker(n)){
        cout << "YES";
    }else cout << "NO";



}