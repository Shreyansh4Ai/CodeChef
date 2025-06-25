#include <bits/stdc++.h>
using namespace std;

int main() {
	
	int t ;
	cin>> t ;
	while(t--){
	    
	    int n ;
	    cin>> n ;
	    vector <int> a(n);
	    for(int i = 0 ; i<n ;i++){
	        cin>>a[i];
	    }
	    bool even = true  ;
	 
	    for (int i =0 ; i< n-1 ; i++){
	        int j = i+1 ;
	        if( (a[i] + a[j] )%2 != 0 ){
	             even = false ;
	        }
	    }
	    
	    if ( even == true ) cout << 0 << endl;
	   //  else cout << "kuch toh h "<< endl;  //yha tk sb thik h 
	    else{
	        
	        int sum = 0 ;
	        int ones  =0 ;
	        int tows = 0 ;
	        for(int i = 0 ; i< n ; i++){
	            sum = sum +a[i];
	            
	            if(a[i]% 2 != 0)  ones++ ; 
	            else tows++ ;
	        }
	       
	       
	       if ( ones % 2 != 0){
	           cout << tows << endl;
	       }else {
	         cout << min (tows,(ones+1)/2) << endl;
	       }
	        
	        
	    }
	    
	}

}
