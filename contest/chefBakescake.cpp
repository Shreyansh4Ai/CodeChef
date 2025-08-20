#include <bits/stdc++.h>
using namespace std;

int main() {
	int n , x ,y ;
	cin >> n >> x >> y ;
   
   int cpv = (y/x);
   int v = (n+ cpv - 1 ) / cpv ; 
   cout << v << endl;
}
