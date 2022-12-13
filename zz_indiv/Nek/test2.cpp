#include<iostream>
#include<vector>

using namespace std;

int main(){
   int n;
   cin>> n;
   vector < int > vt(n);
   for(int i = 0; i < n;i++){
        cin >> vt[i];
   }
   int maxi = vt[0];
   for(int i =1 ;i  < n;i++){
        maxi = max(maxi , vt[i]);
   }
   for(int i = 0;i < maxi;i++){
        bool flag = false;
        for(int j = 0; j < vt.size();j++){
            if(vt[j] == i) flag = true;
        }
        if(!flag) cout << i << " ";
   }

    return 0;
}