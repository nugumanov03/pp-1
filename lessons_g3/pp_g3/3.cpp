#include<iostream>
#include<algorithm>

using namespace std;

int main(){
    int n;
    cin >> n;
    string st = "";
    for(int i = 1; i < 200;i++){
        string chislo = "";
        for(int j = i; j>0;j/=10){
            chislo+= j%10 +48;
        }
        reverse(chislo.begin() , chislo.end());
        // char chislo = i+48;
        st+= chislo;
    }
    cout << st;
    return 0;
}