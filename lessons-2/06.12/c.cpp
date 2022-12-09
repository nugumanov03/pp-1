#include<iostream>
#include<map>
#include<vector>
#include<algorithm>

using namespace std;

bool comp(pair <string , float> pr1 , pair <string , float> pr2){
    if(pr2.second == pr1.second){
        if(pr1.first < pr2.first) return false; 
        return true;
    }
    if(pr2.second < pr1.second) return true;
    return false;
}

int main(){
    map<string , float> mp;
    int n;
    cin >> n;
    int sum = 0;
    for(int i = 0; i < n;i++){
        string st;
        cin >> st;
        float k;
        cin >> k;
        sum+=k;
        mp[st]+=k;
    }
    map<string , float> :: iterator it = mp.begin();
    vector <pair <string,float> > vt;
    for(it ;it != mp.end() ;it++){
        mp[it->first]=(it->second * 100)/sum;
        vt.push_back( make_pair(it->first , it->second));
    }
   git  sort(vt.begin() , vt.end() , comp);
    for(int i = 0; i< vt.size();i++){
        cout << vt[i].first << " " << vt[i].second<< "%\n";
    }

}
