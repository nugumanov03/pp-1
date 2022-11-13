#include<iostream>

using namespace std;
bool checker(int n,int k, int a[] , int pos){
    if( pos == n){
        return true;    
    }
    for(int j = pos+1 ; j < n;j++){
        int dif = abs(a[pos] - a[j]);
        if(dif < k){
            return false;
        }
    }
    return checker(n , k ,a , pos+1);
}
int main(){
    int n;
    cin >> n;
    int k;
    cin >> k;
    int a[n];
    for(int i = 0;i <n;i++){
        cin >> a[i];
    }
    // ai 
    
    if(checker(n , k , a ,0) != true){
        cout << "cheater";
    }else cout << "no";
    return 0;
}