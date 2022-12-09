#include<iostream>
#include<vector>

using namespace std;

int main(){
    int n;
    cin >> n;
    vector < pair<int , int> > vt;
    for(int i = 0;i < n;i++){
        int x,y;
        cin >> x >> y;
        pair <int ,int > pr;
        pr.first = min(x,y);
        pr.second = max(x,y);
        vt.push_back(pr);
    }
    // 
    // int cnt = 0;
    for(int i = 0; i < n;i++){
        int cnt = 0;
        for(int j = 0; j < i;j++){
            if(vt[i] == vt[j]){
                cnt++;
            }
        }
        cout << cnt << endl;
    }
    return 0;
}