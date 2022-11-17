#include<iostream>
#include<algorithm>

using namespace std;

int main(){
    int ox = 0,oy = 0;
    string s;
    cin >> s;
    for(int i = 0; i < s.size();i++){
        if(s[i] == 'R'){
            ox++;
        }else if(s[i] == 'L'){
            ox--;
        }else if(s[i] == 'F'){
            oy++;
        }else if(s[i] == 'B'){
            oy--;
        }
    }
    if( ox == 0 && oy == 0){
        cout << "Chill Yelnur";
        return 0;
    }
    string st= "";
    if(ox > 0){
        for(int i = 0; i < ox;i++){
            st+="L";
        }
    }else if(ox < 0){
        for(int i = 0; i < abs(ox) ; i++){
            st+="R";
        }
    }
    if(oy > 0){
        for(int i= 0 ; i < oy ;i++){
            st+="B";
        }
    }else if(oy < 0){
        for(int i = 0;i < abs(oy);i++){
            st+="F";
        }
    }

    sort(st.begin() , st.end());
    cout << st << endl;
    cout << ox << " " << oy;

}
