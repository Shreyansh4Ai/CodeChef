#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
 int n ;
 cin>> n ;
 
 vector <int> a(n);
 for(int i = 0 ;i< n ;i++){
     cin>> a[i];
 }
   sort(a.begin() , a.end()) ;
   
  
 
 for(int i = 0 ;i< n ;i++){
     cout << a[i]<<endl;
 }
 
}
