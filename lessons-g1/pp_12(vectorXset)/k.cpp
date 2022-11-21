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
    int sum= 0;
    for(int j = 0; j < k;j++){
        int max = -123, pos;
        for(int i = 0; i < vt.size();i++){
            if(max < vt[i]){
                max = vt[i];
                pos = i;
            }
        }
        sum+=max;
        vt.erase(vt.begin() + pos);
    }
    cout << sum;
}