#include<iostream>
#include<map>
#include<vector>

using namespace std;

int main(){
    int a[5];
    a[0] = 123;
    a[1] = 90;
    a[2] = 83;
    a[3] = 23;
    a[4] = 64;

    map <string , string> mp;
    mp["Hello"] = "SALAM";
    mp["Sun"] = "Kun";
    mp["TableWithFood"] = "Dastarkhan";

    map <string , string> mp2;
    mp2["Privet"] = "Hello";
   
    string st;
    cin >> st; // Privet;
    cout << mp[mp2[st]];
    return 0;
}
