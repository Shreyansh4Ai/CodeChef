#include <bits/stdc++.h>
using namespace std;

int main() {
	int t ;
	cin >> t ;
	while(t--){
	    int a , b ;
	    cin >> a >> b ;
	    int syrup = min(a, b/2);
	    cout << syrup * 3 << endl;
	}
	return 0 ;

}
