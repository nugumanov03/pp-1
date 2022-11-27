#include<iostream>
#include<queue>
#include<vector>

using namespace std;

int main(){
    queue <string> q;
    int n;
    cin >> n;
    vector <string> vt;
    for(int i = 0; i< n;i++){
        int k;
        cin >> k;
        string st;
        if( k == 1){
            cin >> st;
            q.push(st);
        }
        if(k == 2){
            q.pop();
        }
        if(q.empty()){
            vt.push_back("queue is empty\n");
        }else{
            vt.push_back(q.front() + "\n");
        }
    }
    for(int i = 0;i < vt.size();i++){
        cout << vt[i];
    }

}