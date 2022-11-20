#include<iostream>
#include<vector>

using namespace std;

int main(){
    int n;
    cin >> n;
    vector <int> vt;
    for(int i = 0;i < n;i++){
        int k;
        cin >> k;
        vt.push_back(k);
    }
    int kol;
    cin >> kol;
    for(int j = 0; j < kol;j++){
        int min = 123,pos;
        for(int i = 0;i < vt.size();i++){
            if(min > vt[i]){
                min = vt[i];
                pos = i;
            }
        }
        cout << min << " ";
        vt.erase(vt.begin() + pos);
    }
    return 0;
}