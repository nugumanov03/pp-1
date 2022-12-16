#include <iostream> 
using namespace std; 
int main() 
{ 
  string s; 
  string t = ""; 
  cin >> s; 
 
  bool boolka = false; 
 
  for (int i=0; i<s.size(); i++) 
  { 
    if (boolka) t += s[i]; 
    if (s[i] == '@') boolka = true; 
  } 
 
  int cnt=0; 
 
  for (int i=0; i<t.size(); i++) 
  { 
    if (t[i] == '@') 
    { 
      cout << "NO"; 
      return 0; 
    } 
 
    if(t[i] == '.') cnt++; 
 
  } 
 
  if(cnt!=1) 
  { 
    cout << "NO"; 
    return 0; 
  } 
 
 
 for(int i = 0; i < s.size(); i++){
  if( !isLow(s[i]) && s[i] != '@' && s[i] != '.'){
     cout << "NO"; 
    return 0; 
  }
 }
  if (t[t.size()-1] >= 'z' || t[t.size()-1] <='a') 
  { 
    cout << "NO"; 
    return 0; 
  } 
 
  for (int i=0; i<t.size(); i++) cout << t[i]; 
  cout << " YES"; 
}