#include<iostream>
#include<algorithm>

using namespace std;

char toUpp(char n){
    int num = n;
    if(num >= 92){
        num -=32;
    }
    return (char)num;

}

int main(){
    char n ;
    // cout << "enter num: ";
    cin >> n;
    cout << toUpp(n);
    return 0;
}