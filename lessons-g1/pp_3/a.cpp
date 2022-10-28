#include<iostream>

using namespace std;
int main(){
    int a , b ,n;
    bool flag = false;
    cin >> a >> b  >> n;
    int pos;
    for(int i = 0; i < 100; i++){
        if(a > b){
            if((b*i - a) == n || (a - b*i) == n ){
                flag = true;
                pos = i;
                break;
            }
        }else{
            if(( a*i - b) == n ){
            flag = true;
            pos = i;
            break;
            }
        }
    }
    
    if(flag) {
        if(a < b){
            for(int i = 0; i < pos;i++){
                cout << ">A\nA>B\n";
            }
        }else{
                for(int i = 0; i < pos;i++){
                cout << ">B\nB>A\n";
                }
        
        }
    }
    else{
     cout << "NO";
    }

    // 3 : A  
    // 5 : B
    // 1 : N-otvet 

    // A : 3
    // b : 0

    // a:0
    // b:3

    // a:3
    // b:3

    // a:1
    // b:5
    return 0;


}