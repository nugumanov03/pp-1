#include<iostream>
#include<vector>
#include<set>
#include<map>

using namespace std;

int main(){

    map < string, string> mp;

    string ss , ss2;
    cin >> ss; 

    cin >> ss2;
    mp[ss] = ss2;
    mp["Hello"] = "SALAM";
    mp["Moon"] = "Ai";
    mp["GoldenMoon"] = "Altynai";
    
    map < string, string> mp2;

    mp2["Privet"]="Hello";
    mp2["Luna"] = "Moon";
    mp2["ZolotayaLuna"] = "GoldenMoon";
    
    cout << mp[mp2[ss]];
    return 0;
}