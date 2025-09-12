
#include <bits/stdc++.h>
using namespace std;

int main() {
	int t ;
	cin >> t ;
	while(t--){
	    int x , y , r ;
	    cin >> x >> y >> r ;
	    
	      int extra_sticks = r / 30;
        int total_sticks = x + extra_sticks;

        // Calculate plates needed (round up)
        int plates = (total_sticks + y - 1) / y;

        cout << plates << endl;

	}

}
