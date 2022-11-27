#include<iostream>
#include<vector>
#include<set>

using namespace std;

int main(){
    int n;
    cin >> n;
    vector <string> vt(n);
    vector <string> v2;
 
    for(int i = 0;i < n;i++){
        cin >> vt[i]; 
    }
    for(int i = 0;i < vt.size();i++){
        // if(vt[i] == '('){
            v2.push_back(vt[i]);
        // }
        // if(vt[i] == ')'){
        //     if(v2.back() == '('){
        //         v2.pop_back();
        //     }else{
        //         v2.push_back(')');
        
        //     }
        // }
    }
    for(int i = 0; i < v2.size() ;i++){
        cout << v2[i] << " ";
    }

    if(v2.size() == 0){
        cout << "YES";
    }else cout << "NO";
    return 0;
}