#include <iostream>
using namespace std;
int main(){
    
    string a;
    cin>>a;
    int k=0;
    for(int i=0; i<a.size(); i++){
        if(a[i]=='0'){
            k++;
        }else{
            cout<<char('a'+k);
            k=0;
        }
       
    }
    
    return 0;
}