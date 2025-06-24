#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t ; 
	cin >> t ;
	while ( t--){
	    int n , x ; 
	    cin >> n >> x ; 
	    
	    vector <int> a(n) ; 
	    for ( int i = 0 ; i < n ; i++){
	        cin >> a[i]; 
	    }
	    
	    sort(a.begin(),a.end());
	    
	    int y = n - x ; 
	    
	    int j = a[y] - 1 ;
	    cout << j << endl ; 
	}

}
