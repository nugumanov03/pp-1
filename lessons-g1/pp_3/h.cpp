#include<iostream>

using namespace std;

int main(){
    int h1 , m1 , h2 , m2;
    cin>> h1 >> m1 >> h2 >> m2;
    bool flag = true;
    if(h1 > h2){
        flag = false;
    }else if(h1 == h2){
        if(m1 >= m2){
            flag = false;
        }else{
            flag = true;
        }
    }else{
        flag =  true;
    }

    if(flag)cout << "YES";
    else cout <<"NO";

    return 0;
}