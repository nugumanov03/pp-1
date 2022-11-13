#include<iostream>

using namespace std;

string toK(int n ,int k){
    if(n == 0){
        return "";
    }
    int ost = n%k;
    char symvol;
    if(ost < 10){
        symvol = ost+48;
    }else{
        symvol = (ost - 10) + 'A';
        // k < 36
        // A = 65 <-> 10 => 65-10 = 55 
        // B = 66 <-> 11
        // ... Z = 90
    }
    
    return toK(n/k , k) + symvol;
}

int main(){
    int n;
    cin >> n;
    int k;
    cin >> k;
    cout << toK(n , k);

    return 0;
}
