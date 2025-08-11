#include <bits/stdc++.h>
using namespace std;

int main() {
	int t ;
	cin >> t ;
	while(t--){
	    int n ;
	    cin >> n ;
	    
	    string s ;
	    cin >> s ;
	    
	    
	    bool v = true ;
	    for(int i = 0 ; i< n ; i++){
	        for(int j = i+1 ; j < n; j++){
	            
	         if(s[i] == s[j]){
	            cout << n - 2 << endl;
	            v=false ;
	            goto endloop ;
	        }   
	        }
	    }
	    endloop:
	    if( v == true ) cout <<-1<<endl;
	}

}
