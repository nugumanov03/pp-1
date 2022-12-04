#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main(){
    int n;
    cin >> n;
    vector <int > vt(n);
    for(int i = 0;i < n;i++){
        cin >> vt[i];
    }
    for(int i= 0; i < n;i++){
        if(vt[i] == vt[n-1-i]){
            cout << "OK\n";
        }else{
            cout << "Instead of "<< vt[i] << " here was " << vt[n-1-i] << endl;
        }
    }



}