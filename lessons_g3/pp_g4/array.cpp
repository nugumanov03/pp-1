#include<iostream>

using namespace std;
int a[10000];
bool checker(int n, int x){
    for(int i = 0;i < n;i++){
        if(a[i] == x){
            return true;
        }
    }
    return false;
}

int main(){
    int n;
    cin >>n;
    for(int i=0;i < n;i++){
        cin >> a[i];
    }
    int x;
    cin >> x;
    // ai 
    
    if(checker(n , x)){
        cout << "YES";
    }else cout << "NO";

    return 0;
}