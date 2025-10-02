#include <bits/stdc++.h>
using namespace std;
using ll = long long ;
int main() {
	int t ;
	cin >> t;
	while(t--){
	    ll n ; 
	    cin >> n ;
	    vector<ll> a(n);
	    for(ll i = 0 ; i< n ;i++){
	        cin >> a[i];
	        
	    }
	    
	    int tall = 0 ;
	    for(int i = 0 ; i<n ; i++){
	        if(a[i] > tall){
	            tall = a[i];
	        }
	    }
	        cout<<tall << endl;
	    
	    
	    
	    
	    
	}

}
