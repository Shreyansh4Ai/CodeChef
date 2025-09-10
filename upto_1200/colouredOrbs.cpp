#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
   
   int r , b ;
   cin >> r >> b ;
   
   
   if (r > b ){
       int ans = min(r,b)*5 + r-b ;
       cout << ans;
   }else {
       int ans = min(r,b)*5 + (b-r)*2;
       cout << ans ;
   }

   
}
