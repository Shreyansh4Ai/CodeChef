#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	
	int f1 , p1 , f2 , p2 ;
	cin >> f1 >> p1 >> f2 >> p2 ;
	
	int l = abs(f1-p1) ; 
	int n = abs(f2-p2);
	
	if( l > n ){
	    cout << "Second "<< endl;
	}else if(l < n){
	    cout <<"First"<<endl;
	}
  if(l == n ) cout <<"Both"<<endl;

}
