#include<iostream>
#include<vector>

// 4 1 2 3 9

// 0 5 6 7 8

using namespace std;

int main(){
    int n;
    cin >> n;
    vector <int> v(n);
    for(int i = 0; i< n;i++){
        cin >> v[i];
    }
    int maxi = v[0];
    for(int i =1 ;i < n;i++){
        maxi = max(maxi , v[i]);
    }   
    for(int i = 0; i < maxi ; i++){
        bool flag = false;
        for(int j = 0; j < v.size();j++){
            if(v[j] == i){
                flag = true;
            }
        }
        if(!flag) cout << i << ' '; 
    }

    

}