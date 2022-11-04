#include<iostream>

using namespace std;

int main(){
    string s;
    cin >>s;
    int was[10];
    for(int i = 0;i <10;i++){
        was[i] = 0;
    }
    cout << "WAS array :\n";
    for(int i = 0;i < 10;i++){
        cout << was[i] << " ";
    }
    cout << endl;
    cout << "INSERT SOME DATA INTO THIS ARRAY\n";
    for(int i = 0;i < s.size();i++){
        was[s[i]-48]++;
    }
    int maxi =-1;
    for(int i = 0;i < 10;i++){
        maxi = max(maxi,was[i]);
        cout << was[i] << " " << i<< "\n";
    }
    // найти максимум чтобы потом сравнивать
    bool flag = true;
    for(int i = 0;i < 10;i++){
        if(was[i] != 0){
            if(maxi != was[i]){
                flag = false;
            }
        }
    }
    if(flag){
        cout << "YES";
    }else cout << "NO";

}