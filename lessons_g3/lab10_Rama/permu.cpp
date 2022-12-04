#include<iostream>
#include<algorithm>
#include<vector>
#include<unordered_set>

using namespace std;

int main(){ 
    int n;
    cin >> n;
    vector <int > vt;
    vector <int > vt2;
    unordered_set <int > s;
    for(int i = 0;i < n;i++){
        int k;
        cin >> k;
        vt2.push_back(k);
    }   
    for(int i = vt2.size()-1 ; i >= 0;i--){
        s.insert(vt2[i]);
    }
    unordered_set <int >:: iterator it = s.begin();
    for(it;it != s.end();it++){
        vt.push_back(*it);
    }
    for(int i = 0; i < vt.size();i++){
            cout << vt[i] << " ";
        }
        cout << endl;
    do{
        for(int i = 0; i < vt.size();i++){
            cout << vt[i] << " ";
        }
        cout << endl;
    }while(next_permutation(vt.begin(), vt.end()));

    return 0;
}