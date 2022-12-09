#include<iostream>
#include<map>
#include<vector>
#include<algorithm>

using namespace std;

bool comp(pair <int , string> pr1 , pair <int , string> pr2){
    if(pr1.first == pr2.first){
        if(pr1.second > pr2.second){
            return false;
        }return true;
    }
    if(pr1.first > pr2.first) return true;
    return false;

}

int main(){
    string s;
    getline(cin , s);
    map<string , int> mp;
    string st = "";

    for(int i = 0; i < s.size();i++){
        if(s[i] == ' ' || i == s.size()-1){
            // st.erase(st.end()-1);
            if( i == s.size()-1) st+=s[i];
            mp[st]++;
            st = "";
        }else{
            st+=s[i];
        }
    }
    vector < pair <int , string> > vt;
    map<string , int> :: iterator it = mp.begin();
    for(it; it!=mp.end();it++){
        vt.push_back(make_pair(it->second , it->first));
    }
    sort(vt.begin() , vt.end() , comp);
    // reverse(vt.begin() , vt.end());
    for(int i = 0;i < vt.size();i++){
        cout << vt[i].second << " : " << vt[i].first << endl;
    }


    return 0;
}