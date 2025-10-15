#include <bits/stdc++.h>
using namespace std;

int main() {
	int t ;
	cin >> t ;
	while(t--){
	    int n , x , k ;
	    cin >> n >> x >> k ;
	    vector<int> a(n);
	    for(int i = 0 ; i<n ; i++){
	        cin >> a[i];
	    }
	  sort(a.begin() , a.end() , greater<int>());
	  
	   for(int i= 0 ; i< n && k >0 ; i++ ){  // sabotaging 
	       if(a[i] > x ){
	           a[i] = 0 ;
	           x+=100;
	           k-- ; 
	       
	       }
	   }
	       int key = x;
	       a.push_back(x);
	       
	       sort(a.begin () ,a.end());
	       
	       for(int i = a.size() - 1 ; i >= 0 ; i--){
	           if(a[i] == x ){
	               cout << a.size()- i << endl;
	               break;
	           }
	       }
	     //  if(a[n] == key) cout << 1 << endl;
	       
	   }
	       
}	   
	   
	   
	   
	   
	    
	    
	

