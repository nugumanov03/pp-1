#include<bits/stdc++.h> 
using namespace std; 
int a[1001]; 
int main(){ 
 int n; 
 cin >> n; 
 int a2[n]; // 5 9 3 2 2
 for(int i=0 ; i<n; i++){ 
  cin >> a2[i]; 
 } 
 int mx=0; 
 for(int i=0 ; i<n; i++){ 
    a[a2[i]]++; 
 } 
 // a[5] : 1
 // a[9] : 1
 // a[3] : 1
 // a[2] : 1
 // a[2] : 2
 for(int i = 0; i < 100;i++){
    cout << a[i] << " " ; //with index " << i << endl;
 }
  
 for(int i=0; i<1001; i++){ 
  if(mx<a[i]){ 
   mx=a[i]; 
  } 
 } 
 for(int i=1000; i>=1; i--){ 
  if(a[i]==mx){ 
   cout << i <<" "; 
  } 
 } 
}