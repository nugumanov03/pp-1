#include<iostream>

using namespace std;

int summ(int x , int y){
    cout << "Hello from func"<< endl;
    x+=10;
    return x*2 - y/3 ;
}

int foo(){
    return 10;
}

int main(){
    // f(x) = x + 4; 
    // x1 = 5 -> f(x) = 9
    // g(x , y , z) = x + y - z;
    // x1 =5 , y2 = 8 , z = 3 -> g(y,y,x) = 11
    // cout << a << b;
    int a ,b;
    // cin >> a >> b;
    a=10;
    b = 4;
    int x = 10;
    int y = 20;
    // cout << a + b;
    // Аргументы фунцкии инициализируют запуск параметров функции 
    cout << summ(x,y) << endl;
    cout << summ(y,x) << endl;

    cout << foo()<< endl;
    return 0;
}

