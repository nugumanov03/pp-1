#include<iostream>
#include<vector>

using namespace std;

int main(){
    int n;
    cin >> n;
    vector<int> vt (n);
    for(int i = 0;i < n;i++){
        cin >> vt[i];
    }
    int k;
    cin >> k;
    for(int j = 0; j < k;j++){
        int min = 123, pos;
        for(int i = 0; i < vt.size();i++){
            if(min > vt[i]){
                min = vt[i];
                pos = i;
            }
        }
        cout << min << " ";
        vt.erase(vt.begin() + pos);
    }
}