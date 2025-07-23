#include <bits/stdc++.h>
using namespace std;

int main() {
	int t ;
	cin >> t ;
	while(t--){
	    int n , c ;
	    cin >> n >> c ;
	    int initial = c ;
	    vector<int> a(n);
	 for(int i = 0 ; i<n ; i++)
	 {
	     cin >> a[i];
	 }
	 
// min element 
int min  = INT_MAX ;
for(int i = 0 ; i< n  ; i++){
    if ( min > a[i]){
        min = a[i];
    }
}

// c < min condition

if( c < min ){
    c = c + (min - c) + 1 ;
}

 sort( a.begin() , a.end()) ;
for(int i = 0 ; i< n ; i++){
    if ( c == a[i]){
        c++;
    }
    
}

cout << c - initial  << endl;
}
}
