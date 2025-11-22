#include <bits/stdc++.h>
using namespace std;

int main() {
	int t ;
	cin >> t ;
	while(t--){
	    int n ;
	    cin >> n ;
	    
	    int arr[n][2];
	    for(int i = 0 ; i<n ; i++){
	        cin >> arr[i][0] >> arr[i][1];
	      }
	      double max_speed = -1.0 ;
	      int ans = 0;
	     for(int i = 0; i<n ;i++){
	       double speed = (double)arr[i][0] / arr[i][1] ;
	       if(speed > max_speed){
	           max_speed = speed ;
	           ans =i+1; // indexing is started from 0 
	       }
	     }
	     
	    cout << ans << endl;
	    
	}
return 0;
}
