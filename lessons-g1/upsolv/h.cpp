#include<iostream>

using namespace std;

float ratio(float a , float b){
    return (a/b) * 100 ;
}

int main(){
    int n;
    cin >> n;
    float MIN = 12312312;
    string ans;
    for(int i = 0; i < n;i++){
        string st;
        cin >> st;
        float a , b;
        cin >> a >> b;
        if( MIN > ratio(a,b)){
            MIN = ratio(a,b);
            ans = st;
        }
    }
    cout << ans;

    return 0;
}