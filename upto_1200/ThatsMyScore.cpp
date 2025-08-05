#include <bits/stdc++.h>
using namespace std;

int main() {
	int t ;
	cin >> t ;
	while(t--){
	    int n ;
	    cin >> n ;
	  vector <int> max_scores(9,0) ;
	    for(int i =0 ; i< n ;++i){
	        int  p , s ;
	        cin >> p >> s ;
	        
	        if(p>= 1 && p <=8){
	            max_scores[p] = max(max_scores[p] , s ) ;
	        }
	    }

int ts = 0 ;

for(int i = 1 ; i <=8 ; ++i){
    ts += max_scores[i];
}
	    
	    cout << ts << endl;
	    
	}

}
