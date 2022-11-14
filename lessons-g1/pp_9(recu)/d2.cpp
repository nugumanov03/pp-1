#include<iostream>

using namespace std;

bool findbin(int x , int leftside , int rightside , int a[]){
    int middle = ( leftside+ rightside) / 2; 
    if( x == a[middle]){
        return true;
    }
    if(leftside >= rightside - 1){
        return false;
    }
    if( x > a[middle]){
        return findbin(x ,middle , rightside );
    }else{
        return findbin(x ,leftside , middle );
    }
}

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
    sort(a , a + n);
    if(findbin(x , 0 , n , a)){
        cout << Find
    }else cout << NOfind
}