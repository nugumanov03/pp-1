#include<iostream>
#include<algorithm>
#include<string>

using namespace std;

int main(){
    int n,l,r;
    cin >> n >> l >> r;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int amount = r-l+1;
    int buff[amount];
    for (int i = 0; i < amount; i++)
    {
        buff[i] = arr[l+i-1];
    }
    reverse(buff,buff+amount);
    // for (int i = 0; i < amount; i++)
    // {
    //     cout << buff[i] << " ";
    // }
    // cout << endl;
    int k = 0;
    for(int i = l-1; i < r;i++)
    {   

        arr[i] = buff[k];
        k++;
    }
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}   