#include<iostream>
#include<map>

using namespace std;

int main(){
    int n;
    cin >> n;
    map < string , int> mp;
    for(int i = 0; i < n;i++){
        string st;
        cin >> st;
        int k;
        cin >> k;
        mp[st]+=k;
    }   
    int m;
    cin >>m;
    map<string , int> mp2;
    for(int i = 0; i < m;i++){
        string st , st2;
        cin >> st >> st2;
        int k;
        cin >> k;
        mp2[st]+=k;
    }
    //  "flame"


    return 0;
}