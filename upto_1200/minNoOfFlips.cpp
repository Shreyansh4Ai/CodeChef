#include <bits/stdc++.h>
using namespace std;

int main() {
  int t ;
  cin >> t ;
  while(t--){
      int n ;
      cin >> n ;
     vector <int> a(n);
     for (int i = 0 ; i<n ; i++){
         cin >> a[i];
     }
     
     if(n% 2 != 0) cout << -1 <<endl;
     else {
         int cntneg = 0 ;
         int cntpos = 0 ;
         
         for(int i = 0 ; i<n ; i++){
             if(a[i] == 1) cntpos++ ;
             else cntneg++ ;
         }
         cout << abs(n/2 - cntpos)<<endl;
         
     }
     
     
  }
  return 0 ;
}
