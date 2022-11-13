#include<iostream>

using namespace std;
// n = 1478;
// polu(1478) = polu(147) + n%10; // n =1478
// polu(147) = polu(14) + n%10; // n =147
// polu(14) = polu(1) + 14%10; // n = 14
// polu(1) = polu(0) + 1%10; // n =1
// polu(0) = 0

int polu_sum(int n){
    if(n == 0){
        return 0;
    }
    return polu_sum(n/10) + (n%10)/2;
}

int main(){ 
    int n;
    cin >> n;
    cout << polu_sum(n);

    return 0;
} 