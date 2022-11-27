#include<iostream>
#include<cmath>

using namespace std;

string toBinary(int n)
{
    std::string r;
    while(n!=0) {r=(n%2==0 ?"0":"1")+r; n/=2;}
    return r;
}

int toNum(string q)
{
    int k=0;
    for(int i=0;i<q.size();i++)
    {
        k+=((q[i]-'0')*pow(10, q.size()-1-i));
    }
    if((q[q.size()-1]-'0') != (k%10)) k++;
    return k;
}

int main(){
    int a = 101 , b = 11;
    string st;
    cin >> st;
    cout << toNum(toBinary(101)) << "\t";
    cout << toNum(toBinary(11)) << "\n";
    cout << toBinary((toNum(toBinary(101)) | toNum(toBinary(11) ))) << endl;
    cout << (toNum(toBinary(101)) | toNum(toBinary(11) ));
    // cout << ( a & b);

    return 0;
}