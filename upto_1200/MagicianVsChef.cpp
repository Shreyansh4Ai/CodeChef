#include <bits/stdc++.h>
using namespace std;

int main() {
 int t ;
 cin >> t ;
 while(t--){
     int n , x , s ;
     cin >> n >> x >> s ;

     int coin = x ;
     for(int i = 0 ; i<s ; i++){
         int a , b ;
         cin >> a >> b ;
         if(coin == a ) coin = b ;
         else if(coin == b) coin = a ;
         
     }
     cout << coin << endl;
 }
return 0 ;
}
