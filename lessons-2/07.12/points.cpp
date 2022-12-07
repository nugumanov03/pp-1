#include<iostream>
#include<map>
#include<cmath>
#include<vector>
#include<algorithm>

using namespace std;

float dist(int x1,int y1 , int x2 , int y2){
    return sqrt(pow(x2-x1,2) + pow(y2 - y1, 2));
}

int main(){
    int x , y;
    cin>> x >> y;
    int m;
    cin >> m;
    vector <pair < float , pair <int , int> > > vt(m);
    for(int i = 0; i < m;i++){
        int x2 , y2;
        cin >> x2 >> y2;
        vt[i].second.first = x2;
        vt[i].second.second = y2;
        vt[i].first=  dist(x ,y , x2 ,y2);
        // cout << dist(x ,y , x2 ,y2) << endl;
    }
    sort(vt.begin() , vt.end());
    for(int i = 0 ;i < vt.size();i++){
        cout << vt[i].second.first << " " << vt[i].second.second << endl;
    }

    return 0;
}
