#include<iostream>
#include<map>

using namespace std;

int main(){
    int n;
    cin >> n;
    //  map <string , string> mp;
    // mp["rus"] = "privet";
    // "rus" : "Privet";
    // "eng" : "Hello"
    // "kz" : "Salam"
    // mp["rus"] = "Zdravs";
    // string s;
    // cout << mp[s] ;

    // map <string , int> mp;
    //keys      = values
    // mp["abc"]=12 ;
    // mp["bac"]=-100;
    // mp["cb"] = 14;

    map <string,int> mp;
    for(int i = 0;i < n;i++){
        string st;
        cin >> st;
        if(mp[st] == 0){
            mp[st] = i+1;
        }
    }
    map <string,int> :: reverse_iterator it = mp.rbegin();
    for( it; it != mp.rend();it++){
        if( it->first.size() > 5 ){
            cout << " str > 5 : \n";
        }
        cout << it->first << " " << it->second << endl;
    }


    return 0;
}