#include<iostream>
#include<vector>

using namespace std;
#define s second
#define f first 
int main(){
    vector <pair < int , int> > vt(7);
    for(int i = 0; i < 7;i++){
        cin >> vt[i].s;
    }
    vt[0].f = 1;
    vt[1].f = 2;
    vt[2].f = 5;
    vt[3].f = 10;
    vt[4].f = 25;
    vt[5].f = 50;
    vt[6].f = 100;
    vector <pair < int , int> > vt2(7);
    vt2 = vt;
    int m;
    cin >> m;
    for(int j = 0;j < m;j++){
        int n;  
        cin >> n;
        bool flag = true;
        for(int i = 6 ;i >= 0;i--){
            int cnt1 = n / vt[i].f;
            if(cnt1 <= vt[i].s){
                vt[i].s -= cnt1;
                n-= (cnt1 * vt[i].f);
            }else{
                n -= (vt[i].s * vt[i].f );
            }
        }
        if( n > 0) {
            flag = false ;
        }else{
            vt2 = vt;
        }

        if(flag) cout << "Good";
        else cout << "NO";
    }


    return 0;
}