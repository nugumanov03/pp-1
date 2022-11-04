#include<iostream>

using namespace std;

int main(){
    // code
    int x = 5;
    int y = 15;
    int z;
    x = y / x; // 3 15 y%x - остаток от деления 16mod5
    z = x - y ; // -12

    z-6;
    // y = x + y; // 25
    z = z + 3; // -10 
    // <=>
    z+= 3;
    // increment:
    z = z+1; // z +=1 ;
    z++; // z +=1;
    // dicrement 
    z--; // z-=1
    // z = z*2;
    z*=2;
    z/=2;
    if( ){

    }
    if( z > 3){
        cout << "z bolshoe";
    }else{
        cout << "z malenkoe";
    }
 

    cout << z << " " << x << " " << y;   


    return 0;
}