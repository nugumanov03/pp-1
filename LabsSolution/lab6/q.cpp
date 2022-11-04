#include<iostream>
#include<algorithm>

using namespace std;

float get_percent(float n, float m){
    float pers = m/n * 100;
    return pers;
}

int main(){
    float n ,m;
    // cout << "enter num: ";
    cin >> n >> m;

    cout << get_percent(n,m);
    return 0;
}