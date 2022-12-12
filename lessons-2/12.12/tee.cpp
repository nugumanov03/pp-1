#include<iostream>
#include<queue>
#include<algorithm>
#include<map>

using namespace std;

int main(){
    int n;
    cin >> n;
    vector < pair< int , int >  > p(n);
    for(int i = 0; i < n;i++){
        cin >>  p[i].first;
        p[i].second = i;
    }
    sort(p.begin() , p.end());
    vector < int > a(n);
    for(int i = 0; i < n;i++){
        cin >> a[i];
    } 
    vector < int > b(n);
    for(int i = 0; i < n;i++){
        cin >> b[i];
    }
    int m;
    cin >> m;
    queue <int>q;
    for(int i = 0; i < m;i++){
        int c;
        cin >> c;
        q.push(c);
    }   
    while(!q.empty()){
        bool flag = true;
        for( int i = 0 ; i < n;i++){
            if(q.front() == a[p[i].second] ||q.front() == b[p[i].second] ){
                q.pop();
                cout << p[i].first << " ";
                p.erase(p.begin() + i);
                flag = false;
                break;
            }
        }
        if(flag == true) cout << "-1 ";
    }
}