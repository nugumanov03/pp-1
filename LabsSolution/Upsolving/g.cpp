#include<iostream>
#include<cmath>

using namespace std;

int main(){
    int n , m ,x;
    cin >> n >> m >>x;
    if ( x == 1){
        for(int i = sqrt(n) ;  i<= sqrt(m);i++){

            cout << i *i << " ";
        }        
    }else{
        for(int i = sqrt(m) ;  i>= sqrt(n);i--){
        cout << i *i << " ";
        }
    }
    
    return 0;
}