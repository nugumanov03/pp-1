#include<iostream>
#include<vector>

using namespace std;

int main(){
    int n;
    cin >> n;
    vector <int> vt(n);
    for(int i = 0; i < n;i++){
        cin >> vt[i];
    }
    // 14 90 7 63
    vt.push_back(15);
    // 14 90 7 63 15        
    vt.push_back(15);
    vt.push_back(21);
    vt.push_back(14);
    //  14 90 7 63 15 15 21 14
    // cout << vt.size(); // 8



}