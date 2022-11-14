#include<iostream>

using namespace std;

int main(){
    int n;
    cin >> n;
    int a[n];
    for(int i = 0; i < n;i++){
        cin >> a[i];
    }
    int x;
    cin >> x;
    //ai
    bool flag = false;
    int leftside = 0;
    int rightside = n;
    while(true){
        int middle = (leftside + rightside)/2;
        if( x == a[middle]){
            flag = true;
            break;
        }
        if(leftside > rightside - 1){
            break;
        }
        if( x > a[middle]){
            leftside = middle;
        }else{
            rightside = middle;
        }
    }
    cout << flag;
}