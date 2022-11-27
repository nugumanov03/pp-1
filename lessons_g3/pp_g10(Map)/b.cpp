#include<iostream>
#include<vector>
#include<algorithm>


using namespace std;

int main(){
    vector < pair <string, vector <int> > > vt;

    pair <string, vector <int> > pr;
    pr.second.push_back(5);
    // pr.first = "ABCDE";
    vt.push_back(pr);
    vt[0].first = "ABCDE";
    
    cout << vt[0].first << " : " << vt[0].second[0] << " ";
    // pr.first = "devayt";
    // pr.second = 9;



    return 0;
}