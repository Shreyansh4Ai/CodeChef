#include <bits/stdc++.h>
using namespace std;

int main() {

  int t ;
  cin >> t ;
  while(t--){
      int n ;
      cin >> n ;
      int even = 0 ;
      int odd = 1 ;
      
      for (int i = 2 ; i<=n ;i++){
          
          if(i%2 ==0  && n%i == 0) even++;
          else if(i%2 != 0 && n% i == 0) odd++;
              
          
      }
      
      
      cout <<odd<<" "<<even << endl;
      
      
      
      
      
      
  }

}
