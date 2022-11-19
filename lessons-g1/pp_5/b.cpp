#include<iostream>

using namespace std;

int main(){
    string s;
    int x;
    int ox = 0,oy = 0;
    while(cin >> s){    
        cin >> x;
        if(s == "North"){
            oy+=x;
        }else if(s == "South"){
            oy-=x;
        }else if(s == "East"){
            ox+=x;
        }else if(s == "West"){
            ox-=x;
        }
    }
    cout << ox << " " << oy ;



    return 0;
}