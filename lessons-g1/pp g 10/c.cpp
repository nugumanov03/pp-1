#include<iostream>

using namespace std;

int main(){
    int n , m;
    cin >> n >> m;
    // ai
    for(int i = 0; i < n;i++){
        for(int c = 0;c< m;c++){
            for(int j = 0;j <= i;j++){
                cout << "*";
            }
            for(int j = i+1; j < n;j++ ){
                cout << ".";
            }
            for(int j = i+1; j < n;j++ ){
                cout << ".";
            }
            for(int j = 0;j <= i;j++){
                cout << "*";
            }
        }
        cout << endl;
    }



}