#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
long int t ;
cin >> t ; 
while(t--){
   long  int n , a ;
   cin >> n >> a ;
   
   long int healthy  = n - a ;
   
   if ( healthy >= a){
       cout << a << endl;
   }else {
       cout << healthy << endl;
   }
}
}
