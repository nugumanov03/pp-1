#include<iostream>
#include<algorithm>
#include<vector>
#include<set>

using namespace std;

int main(){ 
    int n;
    cin >> n;
    set <int > s;
    for(int i = 0;i < n;i++){
        int k;
        cin >> k;
        s.insert(k);
    }
    set <  int  > :: iterator it = s.begin();
    vector <int > vt;
    for(it ;it != s.end();it++){
        vt.push_back(*it);
    }
    // set < vector < int > > st;
    do{

        // vector <int > vt2;
        for(int i = 0; i < vt.size();i++){
            cout << vt[i] << " ";
        }
        cout << endl;
        // st.insert(vt2);
    }while(next_permutation(vt.begin(), vt.end()));

    // set < vector < int > > :: iterator it = st.begin();
    // for(it ;it != st.end();it++){
    //     for(int j = 0; j < (*it).size();j++){
    //         cout << (*it)[j] << " ";
    //     }
    //     cout << endl;
    // }

    return 0;
}