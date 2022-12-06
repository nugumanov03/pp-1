#include<iostream>
#include<vector>
#include<set>
#include<map>

using namespace std;

int main(){
    // vector < vector < pair <int , string> > > vt;
    // set < pair< int , string > s;
    map < string, string> mp;
    // int a[5];
    // a[0] = 5;
    // a[1] = 10;
    // a[2] = 21;
    // a[3] = 38;
    // a[4] = 3;

    // a[2] = 15;

    string ss;
    cin >> ss; 
    mp["Hello"] = "SALAM";
    mp["Moon"] = "Ai";
    mp["GoldenMoon"] = "Altynai";
    

    cout << mp[ss];
    // map <int , int> mp2;

    // mp2[15] = 19;
    // mp2[19] = 15;
    // mp2[15] = 21;

    // cout << mp2[15];

    return 0;
}