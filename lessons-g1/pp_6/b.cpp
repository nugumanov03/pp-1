#include<iostream>

using namespace std;

int myfunc(int x,int y){
    int sum = 2 * x + y;
    cout << "Privet ot myfunc()\n";
    return sum;
    cout << "Privet ot myfunc() 2\n";
}


int main(){
    // f(x) = x+3
    // x = 5
    // f(x) = 8
    // x = 10
    // f(x) = 13
    int a, b;
    a =5;
    b =14;
    int c = 123;
    int d = 12333;
    cout << myfunc(a,b) << endl;
    // аргументы функции инициализируют запуск параметров функции 
    cout << myfunc(b,a) << endl;
    

    return 0;
}