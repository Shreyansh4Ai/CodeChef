#include <bits/stdc++.h>
using namespace std;

int main() {
    
    int t ;
    cin >> t ;
    while(t--){
      long   int x , y , z ;
      cin >> x >> y >> z ;
      
     
     if ( x+ y == abs(z)) cout << "YES"<< endl;
    else if( y + z  == abs(x)) cout <<"YES"<<endl;
    else if (z+x == abs(y)) cout <<"YES"<< endl;
    else cout <<"NO"<< endl;
}
}
