#include<iostream>

using namespace std;

int main(){
    string s;
    cin >> s;
    bool boolka= true;
    int cnt = 0;
    int arr[10][2];
    for(int i = 0; i < 10;i++){
        arr[i][0] = i;
        arr[i][1] = 0;
    }
    for(int i = 0; i < s.size();i++){
        char num1 = s[i];
        int num = num1 - 48;
        arr[num][1]++;
    }
    for(int i = 0 ; i < 10;i++){
        if(arr[i][1] != 0){
            cnt = arr[i][1];
        }
    }
    for(int i = 0 ; i < 10;i++){
        if(arr[i][1]!= 0 && arr[i][1] != cnt){
            boolka = false;
        }
        // cout << arr[i][1] << " ";
    
        // cout << endl;
    }
    if(boolka){
        cout << "YES";
    }else{cout << "NO";}
  
    return 0;
}