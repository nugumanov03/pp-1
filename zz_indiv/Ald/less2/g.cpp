#include<iostream>
#include<algorithm>

using namespace std;

int main(){
    string s;
    cin >> s;
    int cnt = 0;
    sort(s.begin() , s.end());
    for(int i = 0;i < s.size();i++){
        if(s[i] != s[i+1]){
            cnt++;
            cout << s[i] << " ";
        }
    }
    cout <<endl<< cnt << endl;
    char uni[cnt];
    for(int i = 0,k = 0;i < s.size();i++){
        if(s[i] != s[i+1]){
            uni[k] = s[i];
            k++;   
        }
    }

    for(int i = 0;i < cnt;i++){
        cout << uni[i] << " ";
    }
    int chetchiki[cnt];
    for(int i = 0;i < cnt;i++){
        chetchiki[i] = 0;
    }
     for(int i = 0,k = 0;i < s.size();i++){
        if(s[i] == uni[k]){
            chetchiki[k]++; 
        }else{
            k++;
        }
    }
    cout << endl;
    for(int i = 0;i < cnt;i++){
        cout << uni[i] << " " << chetchiki[i] << endl;
    }
    
    return 0;
}