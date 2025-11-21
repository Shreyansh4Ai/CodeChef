
#include <bits/stdc++.h>
using namespace std;

int main() {
	int t ;
	cin >> t ;
	while(t--){
	    int n ;
	    cin >> n ;
	    vector<int>a(n);
	    int cnt2 = 0 ; 
	    int cnt3 = 0 ; 
	    int cnt1 = 0 ;
	    for(int i = 0 ; i<n ; i++){
	        cin >> a[i];
	       if(a[i] == 1 ) cnt1++; 
	        if(a[i] == 2 ) cnt2++;
	         if(a[i] == 3 ) cnt3++;
	    }
	    
	    int ans = max(0,cnt2-1) + min(cnt1 , cnt3 ) ;
	    cout << ans << endl;
	    
	}
return 0 ;
}
