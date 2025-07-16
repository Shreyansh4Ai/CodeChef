#include <bits/stdc++.h>
using namespace std;

int main() {
	int t ;
	cin >> t ;
	while(t--){
	   long  int n ;
	    cin >>n  ;
	    vector<int > a(n);
	    for( long int i = 0 ; i <n ;i++){
	        cin >> a[i];
	    }
	   long long int sum = 0 ;
	    bool good = false ;
	  long long int avg = 0 ;
	    for( long int i = 0 ; i < n ; i++){

	    sum = sum + a[i] ;
	    
	    avg = sum /(i+1) ;
	    if ( avg < 40){ 
	    cout <<"NO"<< endl;
	    good = true ;
	    break;
	    }
	    
     }
	    if (good == false ){
	        cout << "YES" << endl;
	    }
	}

}
