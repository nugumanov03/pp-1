#include<iostream>

using namespace std;

string strToBool(string s){
    if(s.size() == 1){
        if (s == "1") return "true";
        return "false";
    }
    return s;

}
int main(){
    string s;
    cin >> s;
    cout << strToBool(s);
    return 0;
}