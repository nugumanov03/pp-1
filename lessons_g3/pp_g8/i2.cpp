#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;
bool BiFind(vector <int>& vt , int x , int mid, int leftside ,int rightside){
    mid = (leftside+rightside) / 2;
    if(vt[mid] == x){
        return true;
    }
    if( leftside +1 >= rightside){
        return false;
    }
    if( vt[mid] > x) return BiFind(vt , x ,mid , leftside , mid );
    else return BiFind(vt , x ,mid , mid , rightside);

    
}
int main(){
    int n;
    cin >> n;
    vector <int> vt;
    for(int i = 0,k ;i < n;i++){
        cin>> k;
        vt.push_back(k);}
    int x;
    cin >> x;
    sort(vt.begin() , vt.end());
    cout << (BiFind(vt , x, 123 , 0 , vt.size()) ? "YES" :  "NO");
    return 0;
}