
#include<iostream>

using namespace std;

int main(){
    string s ;
    cin >> s ;
    bool boolka = true;
    int sum =0,sum2 = 0;
    for(int i = 0; i < s.size();i++){
        char num1 = s[i];
        int num = num1 - 48;
        if(i%2==0){
            sum += num; 
        }else{ sum2 +=num;}
    }
    if(sum == sum2){
        cout << "YES";
    }else { cout << "NO";}

    // cout <<endl << sum << " "<< sum2;
    return 0;
}
