#include<iostream>

using namespace std;

bool comp(pair<int, int> pr1 , pair<int, int> pr2){
    if(pr1.first == pr2.first){
        if(pr1.second > pr2.second){
            return false;
        }else return true;
    }else if(pr1.first > pr2.first){
        return false;
    }else return true
}

int main(){
    vector < pair <int , int > > vt
    sort(vt.begin(), vt.end() , comp);
}   