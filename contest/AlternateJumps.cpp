#include <bits/stdc++.h>
using namespace std;

int main() {
	int t ;
	cin >> t ;
	while(t--){
	    int n ;
	    cin >> n ;
	    
	    int pos = n ;
	    for(int i = 1 ; i<= n-1 ; ++i){
	        if(i%2 == 0){
	            pos += (n-i);
	        }else {
	            pos -=(n-i);
	        }
	    }
	    cout << pos << endl;
	}

}
