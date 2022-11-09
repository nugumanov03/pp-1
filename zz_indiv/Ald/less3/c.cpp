#include<iostream>

using namespace std;

bool isDig(char a){
    bool flag = false;
    if(a >= '0' && a<= '9'){
        flag =true;
    }
    // 
    return flag;

 }

int main(){
    char a;
    cin >> a;
    // isDig('5') = true
    // isDig('f') = false 
    if(isDig(a) == true){
        cout << "YES";
    }else {
        cout << "NO";
    }
}