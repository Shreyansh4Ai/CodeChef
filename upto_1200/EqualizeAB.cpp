#include <bits/stdc++.h>
using namespace std;
using ll = long long ;
int main() {
	ll t ;
	cin >> t ;
	while(t--){
	    ll a , b , c ;
	    cin >> a>> b >> c;
	    
	    if(abs(a-b) % (2*c) == 0) cout <<"YES"<<endl;
	    else cout <<"NO"<<endl;
	    
	}

}
