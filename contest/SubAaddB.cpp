#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
int t ;
 cin >> t ;
 while(t--){
     int n , a , b ;
     cin >> n >> a >> b ;
     
     int cnt = 0 ;
     while(n >= a ){
         n = n - a + b  ;
         
     }
     
     cout << n << endl;
     
 }
    
}
