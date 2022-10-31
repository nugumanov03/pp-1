#include<iostream>

using namespace std;

int main(){
    string s;
    cin >> s;
    int sum1 = 0,sum2 = 0;

    for(int i = 0;i < s.size();i++ ){
        int num = s[i];
        num -= 48;
        if(i%2 == 0){
            sum1+= num;
        }else sum2+= num;
    }



    // int c = n , cnt = 0;  
    // while(c>0){
    //     cnt++;
    //     c/=10;
    // }
    // // cnt : dline n 
    // int i;
    // if(cnt%2==0){
    //     i = 0;
        
    // }else i = 1;

    // while( n > 0){
    //         // cout << n << " ";
    //         int k = n%10;
    //         if( i%2==0){
    //             sum1+=k;
    //         }else sum2+=k;
    //         i++;
    //         n/=10;
    //     }    
    cout << sum1 << " " << sum2;
    if(sum1 == sum2){
        cout << "YES";
    }else cout << "NO";

    return 0;
}