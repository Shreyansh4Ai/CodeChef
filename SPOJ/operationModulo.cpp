#include<bits/stdc++.h>
using namespace std ;
using ll = long long  ;
int main(){
    ll l , r ;
    cin >> l >> r ;
    
   ll sum = 0 ;
   ll p = 1 ;

   while(p <= r ){
    if(p>=l) sum +=p ;
    if(p > r/2) break;

     p<<=1;
   }
 
   cout << sum <<endl;

}