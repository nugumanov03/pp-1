#include<iostream>

using namespace std;

int main(){
    int n;
    {
        n = 20;
        {
            int n = 6;
            cout << n << " ";
        }
        n+=10;
    }
    cout << n;
    return 0;
}