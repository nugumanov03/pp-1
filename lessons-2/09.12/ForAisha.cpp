#include<iostream>
#include<map>
#include<vector>
#include<algorithm>

using namespace std;

int main(){
    string s;
    getline(cin , s);
    string st = "";
    string a[100];
    for(int i = 0; i < s.size();i++){
        if( i == s.size()-1) st+=s[i];
        if(s[i] == ' ' || i == s.size()-1){
            a[i] = st;
            st = "";
        }else st+=s[i];
    }
    sort(a , a+ 100);
    int cnt = 0;
    for(int i = 0; i < 100;i++){
        if(a[i] != a[i+1]){
            cnt++;
        }
    }
    string uni[cnt][2];
    // int uni_c[cnt];
    // for(int i = 0; i <cnt;i++) uni_c[i] = 0;
    for(int i = 0 , k = 0; i < 100;i++){
        if(a[i] != a[i+1]){
            uni[k][0] = a[i];
            k++;
        }
    }
    // for(int i = 0; i < cnt ;i++){
    //     cout << uni[i] << endl;
    // }
    for(int i = 0; i < 100 ; i++){
        for(int j = 0; j  < cnt;j++){
            if(uni[j][0] == a[i]){
                uni[j][1] += 'a';
            }
        }
    }
    reverse(uni, uni + cnt);
    // reverse(uni_c, uni_c + cnt);
    for(int i = 0; i < cnt ;i++){
        if(uni[i][0] != ""){
            cout << uni[i][0] << " : " << uni[i][1].size() << endl;
        }
    }

    return 0;
}