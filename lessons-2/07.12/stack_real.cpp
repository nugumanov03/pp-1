#include <iostream> 
#include <stack> 
#include <algorithm> 
using namespace std; 
int main() 
{ 
  string s; 
  cin >> s; 
  stack <char> vt; 
 
  sort(s.begin(), s.end()); 
 
  for (int i=0; i<s.size(); i++) 
  { 
    if(vt.empty()) vt.push(s[i]); 
    else if (vt.top() == s[i]) vt.pop(); 
    else vt.push(s[i]); 
  } 
 
  if (vt.size() == 0 || vt.size() == 1) cout << "ZA WARUDO TOKI WO TOMARE"; 
  else cout << "JOJO"; 
}

