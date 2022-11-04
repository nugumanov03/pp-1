#include <bits/stdc++.h>

using namespace std;

string a;
int pods(string q)
{
    int z=0;
    int p=0;
    for(int i=0;i<q.size()-a.size()+1;i++)
    {
        for(int s=0;s<a.size();s++)
        {
            if(q[i+s] ==a[s])
            {
                z++;
            }
            if(z==a.size())
            {
                 p++;
            }
        }
        
        z=0;
    }
    return p;
}
void swapat()
{
    for(int i=a.size()-2;i>=0;i--)
    {
        swap(a[i], a[i+1]);
    }
    return;
}

int main()
{
    string q;
    cin >> q;
    cin >> a;
    int c=0;
    
    for(int i=0;i<a.size();i++)
    {
        c+=pods(q);
        swapat();
    }
    int m=0;
    for(int i=0;i<a.size();i++)
    {
        if(a[i] == a[i+1])
        {
            m++;
        }
    }   
    if(m+1== a.size())
    {
        c/=2;
    }
    cout << c;


}