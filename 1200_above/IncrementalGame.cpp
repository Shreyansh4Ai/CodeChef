#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
int t ;
cin>> t ;
while(t--){
    int x , y ,k ;
    cin>> x >> y >> k ;

      if ((x - k) <= k && y <= k || (y - k) <= k && x <= k) {
            cout << "Alice\n";
        }
        else {
            cout << "Bob\n";
        }
}
}
