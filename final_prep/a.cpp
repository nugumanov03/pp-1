#include<iostream>
#include<vector>
#include<set>
#include<algorithm>

using namespace std;

#define f first
#define s second

int main(){
    int n;
    cin >> n;
    vector < string > vt(n);
    for(int i = 0; i < n;i++){
        cin >> vt[i];
    }
    int m;
    cin >> m;
    vector < pair < string , string > > v2;
    for(int i = 0; i < m;i++){
        pair < string , string > pr;
        cin >> pr.f >> pr.s;
        v2.push_back(pr);
    }
    string in;
    cin >> in;
    vector <string> vv;
    for(int i = 0; i < v2.size();i++){
        if(v2[i].f == in) vv.push_back(v2[i].s);
        if(v2[i].s == in) vv.push_back(v2[i].f);
    }
    sort(vv.begin() , vv.end());
    cout << vv.size() << endl;
    for(int i = 0; i < vv.size(); i++){
        cout <<vv[i] << " ";
    }

    return 0;
}