#include<iostream>


using namespace std;


// char change(char x){

//     int num = (int)x;
//     if(num >= 97 &&  num <= 122){
//         // num-=32;
//         // x = (char)num;
//         x-=32;
//     }else if(num >= 65 &&  num <= 90){
//         // num+=32;
//         // x = (char)num;
//         x+=32;
//     }
//     return x;
// }

int main(){
    char x;
    cin >> x;
    
    int num = (int)x;
    if(num >= 97 &&  num <= 122){
        // num-=32;
        // x = (char)num;
        x-=32;
    }else if(num >= 65 &&  num <= 90){
        // num+=32;
        // x = (char)num;
        x+=32;
    }
    cout << x;
    return 0;
}