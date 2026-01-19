#include <bits/stdc++.h>
using namespace std;

int main() {
	int t ;
	cin >> t ;
	while(t--){
	    int l , r ;
	    cin >> l >> r ;
	    int cnt= 0 ;
	    for(int i = l ; i<=r ; ++i){
	        int ld = i % 10 ;
	        
	        if(ld == 2 || ld ==3 || ld == 9) cnt++;
	        
	    }
	    cout << cnt << endl;
	}
 return 0;
}
