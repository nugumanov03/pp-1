#include<iostream>

using namespace std;

int main(){
    string s;
    cin >> s;
    string num = "";
    string nums[4];
    bool boolka =  true;
    int cnt = 0;
    for(int i = 0 , k = 0; i < s.size();i++){
        if(s[i] != '.'){
            num+=s[i];
        }
        if(s[i] == '.' || i == s.size()-1){
            nums[k] = num;
            k++;
            num="";
        }
        if(s[i] == '.'){
            cnt++;
        }
    }
    bool boolka2 = true;
        if(cnt != 3){
            boolka = false;
        }
    // cout << cnt << endl;
    for(int i = 0;i<4;i++){
        if(nums[i].size() > 3 || nums[i].size() == 0){
            boolka = false;
        }
        if(nums[i].size() == 3){
            int num_sum = 100 *((int)nums[i][0] - 48) + 10*( (int)nums[i][1] - 48) + (int)nums[i][2] - 48;
            if(num_sum > 255){
                boolka = false;
            }
        }
        for(int j = 0; j < nums[i].size();j++){
            
            if(  !(nums[i][j] >= '0' && nums[i][j] <='9')){
                boolka2 = false;
            }
        }
        // cout << num_sum << " ";
        if(!boolka2){
            boolka = false;
        }
        // cout << nums[i] << "\n";
    }

    if(boolka){
        cout << endl <<1;
    }else cout << endl << 0;

    return 0;
}