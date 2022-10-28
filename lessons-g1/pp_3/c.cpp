#include <bits/stdc++.h>
using namespace std;
int main ()
{
  int n;
  cin >> n;
  int w[n][n];
  for(int i=0;i<n;i++)
  {
    for(int s=0;s<n;s++)
    {
      cin >> w[i][s];
    }
  }
  int z=2;
  int x = 0;
  cout << w[0][n-1] << endl;
  for(int i=n-2;i>=1;i--)
  {  
    
    for(int j = 0;j<z;j++)
    {
      cout << w[j][i+x] <<" ";
      x++;
    }
    cout << endl;
    x = 0;
    z++;
    
  }
  for(int i=0;i<n;i++)
  {
    for(int s=0;s<n;s++)
    {
      if(i == s)
      {
        cout << w[i][s] <<" ";
      }
    }
    
  }
  cout << endl;
  int c = n-1;
  int v=0;
  for(int i=1;i<=n-2;i++)
  {
    for(int s=0;s<c;s++)
    {
      cout << w[i+v][v] <<" ";
      v++;
    }
    cout << endl;
    v = 0;
    c--;
  }
  cout << w[n-1][0];

}