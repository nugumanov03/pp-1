#include<iostream>
#include<algorithm>

using namespace std;

int get_percent(int n, int m){
    int pers = n/m *100;
    return pers;
}

int main(){
    int n ,m;
    // cout << "enter num: ";
    cin >> n >> m;

    cout << pers(n,m);
    return 0;
}