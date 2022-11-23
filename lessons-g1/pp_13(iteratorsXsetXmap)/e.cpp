#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;

int main(){
    int n;
    cin >> n;
    vector <int> vt1;
    vector <int> vt2;
    for(int i = 0; i < n;i++){
        int x;
        cin >> x;
        if(x%2==0){
            vt1.push_back(x);
        }else{
            vt2.push_back(x);
        }
    }
    sort(vt1.begin(),vt1.end());
    reverse(vt1.begin() , vt1.end());

    sort(vt2.begin(),vt2.end());
    //  
    for(int i = 0; i < vt1.size();i++){
        cout << vt1[i] << " ";
    }
    for(int i = 0; i < vt2.size();i++){
        cout << vt2[i] << " ";
    }
    return 0;
}