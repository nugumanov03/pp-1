#include<iostream>
#include<queue>
#include<algorithm>

using namespace std;

int main(){
    int n;
    cin >> n;
    vector <pair < int , pair < int , int > > > v(n);
    for(int i = 0; i < n;i++){
        cin >> v[i].first;
    }
    for(int i = 0; i < n;i++){
        cin >> v[i].second.first;
    } 
    for(int i = 0; i < n;i++){
        cin >> v[i].second.second;
    }
    sort(v.begin() , v.end());
    int m;
    cin >> m;
    queue <int>q;
    for(int i = 0; i < m;i++){
        int c;
        cin >> c;
        q.push(c);
    }   
    while(!q.empty()){
        bool flag = false;
        int pr = 0;
        for(int i = 0;i < v.size();i++){
            if(q.front() == v[i].second.first ||q.front() == v[i].second.second ){
                pr =  v[i].first;
                flag = true;
                v.erase(v.begin() + i);
                break;
            }
        }
        if(flag) cout << pr << ' ';
        else cout << "-1 "; 
        q.pop();
    }
}