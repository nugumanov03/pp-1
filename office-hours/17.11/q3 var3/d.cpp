#include<iostream>

using namespace std;

int main(){
    string s;
    getline(cin , s);
    string slova[100];
    string st="";
    int cnt_slov = 0;
    for(int i = 0,k = 0 ;i < s.size();i++){
        st+=s[i];
        if(s[i] == ' ' || s[i] == '?' || i == s.size()-1){
            slova[k] = st;
            k++;
            st= "";
            cnt_slov++;
        }
    }
    for(int i = 0;i < cnt_slov;i++){
        cout << slova[i] << endl;
    }
    cout << "END\n";
    for(int i = 0 ;i < cnt_slov ; i++){
        bool flag = true;
        for(int j = 0; j < i;j++){
            if(slova[i] == slova[j]){
                flag = false;
            }
        }
        if(!flag){
            cout << slova[i] << endl;
        }  
    }

    return 0;
}