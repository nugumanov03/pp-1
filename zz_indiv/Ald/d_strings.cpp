#include<iostream>

using namespace std;

int main(){
    string s;
    cin >> s;
    int cnt= 0;
    for(int i = 0;i < s.size();i++){ // пробежаться по элементам(символам)  одной строки 
        int k = (int)s[i];
        if( k >= 65 && k  <= 90){ // проверка являеться ли заглавной
            cnt++;
        }
    }

    cout << s.size() - cnt <<" " << cnt;


    return 0;
}