#include <bits/stdc++.h>
using namespace std;

int main() {
	int t ;
	cin >> t ;
	while(t--){
	    int x , y , a , b ;
	    cin >> x >> y >> a >>  b ;
	    int cnt = 0;
	    if(x == a || x == b)cnt++;
	    if( y == a || y == b) cnt++;
	
	    int ans = 2- cnt ;
	    cout <<ans << endl;
	}

}
