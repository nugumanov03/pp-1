#include<iostream>

using namespace std;

int main(){
    int a,b;
    cin >> a;  // a = 3 ; b =2 

    if( a == 0){
        cout << "eto nol`" << endl;
    }else if( a > 0){
        cout << "polozhitelnoe" << endl;
    }else{
        cout << "otrizatelnoe" << endl;
    }

    cout << "code zakonchen"; //  

    return 0;
}