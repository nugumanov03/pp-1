#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;

int main(){
    int n;
    cin >> n;
    vector < pair <int , int > > vt;
    for(int i = 0 ; i < n;i++){
        int x,y;
        cin >> x >> y;
        pair <int , int > pr;
        pr.first = x;
        pr.second = y;
        // pr = {x , y}
        vt.push_back(pr);
    }
    sort(vt.begin() , vt.end());
    for(int i = 0;i < vt.size() ; i++){
        cout << vt[i].first << " " << vt[i].second << endl;
    }
    // vt = [
    //     {x , y},
    //     {x2, y2},
    //     {x3 , y3}.
    // ]


}