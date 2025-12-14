#include <bits/stdc++.h>
using namespace std;

int main() {
	int t ;
	cin>>t ;
	while(t--){
	    int x , y ;
	    cin >> x >> y ;
	    int alice = (x+y)/2 ;
	    int bob = y-alice ;
	    cout << alice <<" "<< bob << endl;
	}

}
