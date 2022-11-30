#include<iostream>
#include<vector>
#include<algorithm>
#include<map>

using namespace std;

int main(){
    map <string, string> mp;
    mp["Hello"] = "SALAM";
    mp["GoldenMoon"] = "Altynai";
    mp["variables"] = "Ainamaly";

    map <string , string > mp2;
    mp2["SALAM"] = "Privet";

    string st;
    cin >> st; // Hello
    map <string, string> :: iterator it = mp.begin();
    map <string, string> :: iterator it2 = mp2.begin();
    
    for(it ; it!= mp.end() || it2 !=mp2.end() ;it++){
        if( it->first == it2->first && it->second == it2->second){
            cout << "YES";
        }
    }


}