#include <bits/stdc++.h>
using namespace std;

int main() {
	int t ;
	cin>>t  ; 
	
	while(t--){
	    
	    
	    int n ;
	    cin>> n ;
	     
	    vector <int> a(n) ;
	     
	    for(int i = 0 ; i< n ; i++){
	        cin>> a[i];
	    }
	    
	    // counts the frequency 
	    
	    vector<int> counts(11,0) ; // counts function
	    
	    for (int i = 0 ; i<n ;i++){
	        counts[a[i]]++ ;
	    }
	    
	    // max frequency 
	    
	    int max_count = 0 ;
	    for(int i = 0 ;i <= 10 ;++i){
	        max_count = max(max_count , counts [i]);
	    }
	     
	     // min no of moves 
	     cout << n-max_count << endl;
	     }
	     
	    
	


}
