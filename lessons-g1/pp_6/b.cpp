#include<iostream>

using namespace std;

// int myfunc(int x,int y , int w);

void printer(int a){
    cout << " Hello from void\t " << a << endl;
    cout << " Hello from void2\t " << a << endl;
    return;
}

int main(){
    // f(x) = x+3
    // x = 5
    // f(x , y) = x + y 
    // x = 10
    // f(x) = 13
    int a, b;
    a =5;
    b =14;
    int c = 123;
    int d = 12333;
    for(int i = 0;i < 10;i++){
        printer(i);
    }
    // cout << myfunc(a,b , c) << endl;
    // аргументы функции инициализируют запуск параметров функции 
    // cout << myfunc(b,a , c) << endl;
    

    cout << "end";

    // printer();
    return 0;
}

// int myfunc(int x,int y , int w){
//     int sum = 2 * x + y - w;
//     cout << "Privet ot myfunc()\n";
//     return sum;
//     cout << "Privet ot myfunc() 2\n";
// }