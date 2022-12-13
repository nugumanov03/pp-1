#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int sum1(int n){
    int sum = 0;
    for(int i = 0;i < n;i++){
        sum+=i;
    }
    return sum;
}
int main(){
    int n;
    cin >> n;
  
    vector < int > v(sum1(n+1));
    for(int i = 1; i < n+1;i++){
        fill(v.begin() + sum1(i), v.begin() + sum1(i+1)  , i);
    }
    for(int i = 0; i < v.size();i++){
        cout << v[i] << " ";
    }


}