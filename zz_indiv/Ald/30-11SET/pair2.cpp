#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;

int main(){
    pair< string , int> pr;
        pr.second = 15;
        pr.first = "Privet";

    pair < string , pair < string , int > > BigPr;
    BigPr.first = "Hello";
    BigPr.second = pr; 
    cout << BigPr.first << BigPr.second.first << BigPr.second.second 
}   