#include<iostream>
#include<algorithm>

using namespace std;

int main(){
    int n, m;
    // cout << "enter num: ";
    cin >> n >> m;
    int a[m][n];
    int mn = 1212332;
    for(int i = 0 ; i < n;i++){
        for(int j = 0;j < m;j++){
           cin >> a[j][i];
        }
    }
    cout << endl;
    for(int i = 0 ; i < m;i++){
        for(int j = 0;j < n;j++){
           cout <<  a[i][j] << " ";
        }
        cout << endl;
    }

    int sum = 0;
    int posarray[m];
    int posarrayx[m];
    for(int i = 0 ; i < m;i++){
        mn = 12312312;

        for(int j = 0;j < n;j++){
            if(mn > a[i][j] ){
                mn = a[i][j];
                posarray[i] = j+1;
                posarrayx[i] = i+1;
            }
            // cout << a[i][j] << " ";
        }
        sum+=mn;

        // cout << endl;
    }
    cout << "coordinates of min elements: \n";
    for (int i = 0; i < m; i++)
    {
        cout << posarray[i]<<";"<<posarrayx[i] << "\n";
    }
    cout << "\nTheir sum:\n";
      cout << sum << " ";
    

}