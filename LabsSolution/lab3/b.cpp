#include<iostream>

using namespace std;

int main(){
    int size,b;
    cin >> size;
    int cnt= 0;
    int arra[size];
    for (int i = 0; i <size; i++)
    {
        cin >> arra[i];
    }
    for(int i = 0; i < size;i++){
        if (arra[i] < -20){
            cnt++;
        }
    }
    cout << cnt << endl;
    
    return 0;
}