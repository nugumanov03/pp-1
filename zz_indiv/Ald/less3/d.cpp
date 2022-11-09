#include<iostream>

using namespace std;

bool isDig(char a){
    bool flag = false;
    if(a >= '0' && a<= '9'){
        flag =true;
    }
    // 
    return flag;

}

int count_ofdigits(string s){
    int cnt= 0;
    for(int i = 0;i < s.size();i++){
        if(isDig(s[i]) == true){
            cnt++;
        }
    }   
    return cnt;
}

int main(){
    string s;
    cin >> s;
    // abc123 => 3
    // 1890 => 4
    // ashdb123asdjn => 3;
    // isDig('5') = true
    // isDig('f') = false 
    // isDig('a') = false
    cout << count_ofdigits(s);
    // count_ofdigits("fef505") = 3
}