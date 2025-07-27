#include <bits/stdc++.h>
using namespace std;

int main() {
	int t ;
	cin >> t ;
	while(t--){
	    int n , m ;
	    cin >> n >> m ;
	    
	    int ppr = (m+1)/2 ; // people per row 
	    int ur = (n+1)/2 ; //usable rows 
	    int ans = ppr*ur ; 
	    
	    cout <<ans<<endl;
	    
	}

}
