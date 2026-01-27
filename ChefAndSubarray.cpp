#include <bits/stdc++.h>
using namespace std;

int main() {
//	int t ;
//	cin>> t ;
//	while(t--){
	    int n ;
	    cin >> n ;
	    vector<int> a(n);
	    for(int i = 0 ; i<n ; i++){
	        cin >> a[i];
	    }
	    
	    int tempo =0 ;
	   int cnt = 0 ;
	   
	   for(int i =0 ; i< n ; i++){
	       if(a[i] != 0) {
	           cnt++;
	             if(tempo < cnt){
	                 tempo = cnt ;
	             }
	       }
	       else{
	           
	        cnt = 0 ;
	       }
	   }
	   cout << tempo << endl;
	   
	
	   
}
