#include<iostream>
#include<vector>
#include<algorithm>


using namespace std;

int main(){
    pair <string, int > pr;
    pr.first = "devayt";
    pr.second = 9;

    cout << pr.first << " : " << pr.second;

    pr.second = 13;
    
    cout << pr.first << " : " << pr.second;

    return 0;
}