#include <bits/stdc++.h>
using namespace std;

int main() {
	int t ;
	cin >> t ;
	while(t--){
	    float n ;
	    cin >> n ;
	    
	    float l = 0.143 * n ;
	    float m = pow(l,n);
	    
	    if(m - floor(m) < 0.5){
	        cout << floor(m)<<endl;
	    }else {
	        cout << floor(m)+1 <<endl;
	    }
	}

}

