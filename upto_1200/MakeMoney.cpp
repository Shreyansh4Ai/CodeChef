#include <bits/stdc++.h>
using namespace std;

int main() {
	int t ;
	cin >> t ;
	while(t--){
	    int n , x , c ;
	    cin >> n >> x >> c ;
	    vector<int> a(n);
	    for(int i = 0 ; i< n ; i++){
	        cin>> a[i]; 
	    }
	    int tot  = 0;
	    for(int i =0 ; i< n ; i++){
	        tot += max(a[i] , x-c) ;
	    }
	    
	    cout << tot << endl;
	}

}
