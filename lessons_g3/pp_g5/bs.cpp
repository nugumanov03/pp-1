#include<iostream>

using namespace std;
int x;
bool find(int a[],int leftside , int rightside){
    int middle = (leftside + rightside) / 2;
    if(a[middle] == x){
        return true;
    }
    if(leftside +1 >= rightside){
        return false;
    }
    if( a[middle] > x){
        return find(a,leftside , middle);
    }else{
        return find(a,middle , rightside);
    }        
}

int main(){
    int n;
    cin >> n;
    int a[n];
    for(int i =0;i < n;i++){
        cin >> a[i];
    }
    cin >> x;
    if(find(a ,0 , n ) == true){
        cout << "yes";
    }else cout << "no";
    return 0;
}