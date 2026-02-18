#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
int t ;
cin >> t ; 
while(t--){
    int x , y , n ;
    cin >> x >> y >> n ;
    if(x-(y*n) > 0 ) cout << x-(y*n) << endl;
    else cout << 0 << endl;
}
return 0 ; 
}
