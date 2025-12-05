#include <bits/stdc++.h>
using namespace std;

int main() {
int t ;
cin >> t ;

while(t--){
      int r , g , b ;
      cin >> r >>  g >> b ;
  int m = min({r,b,g});
  long long ans = 10*m + 3 * (r - m + b - m + g - m);
  
  cout << ans << endl;
}
  

}
