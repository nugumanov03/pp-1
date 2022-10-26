#include<iostream>
#include<algorithm>
#include<cmath>

using namespace std;

int main(){
    int n;
    // cout << "enter num: ";
    cin >> n;
    for(int i = 2 ; i < n;i++){
        bool checker = true;
        if( i%2==0 && i!=2){
            checker = false;
        }else{
        for(int j = 3;j <= sqrt(i);j+=2){
           if(i %j ==0){
            checker = false;
           }
        }
        if(checker){
            cout << i <<" is prime"<< endl;
        }
        }
    }
   
    return 0;


}