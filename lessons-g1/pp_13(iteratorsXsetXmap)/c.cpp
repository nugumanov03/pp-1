#include<iostream>
#include<vector>

using namespace std;

int main(){
    int n;
    cin >> n;
    pair <int , pair <int , int> > pr;
    pr.first = 5;
    pr.second.first =7 ;
    pr.second.second =9 ;
    cout << pr.first <<  " " << pr.second.first << " " << pr.second.second;  
    // vector <pair<int,int>> vt;    

    


    return 0;
}