#include<iostream>
#include<algorithm>

using namespace std;

int main(){
    string s;
    cin >> s;
    int was[10];
    for(int i = 0; i < 10;i++){
        was[i] = 0;
    }
    for(int i = 0; i < s.size();i++){
        int chislo = s[i] - 48;
        was[chislo]++;
    }    
    // for(int i = 0;i < 10;i++){
    //     cout << was[i] << " ";
    // }
    sort(was ,was +10);
    cout << endl;
    bool flag = true;
    for(int i = 0;i < 9;i++){
        // cout << was[i] << " ";
        if(was[i] != 0 && was[i] != was[i+1]){
                flag = false;
            }
    }
    if(flag){
        cout << endl << "YES";
    }else cout << endl << "NO";
    return 0;
}