#include <bits/stdc++.h>
using namespace std;


int digitsum(long long int n ){
    long long int ans = n ;
    long long int sum = 0 ;
    while(n>0){
        long long int lastdigit = n% 10 ;
        sum +=lastdigit ;
        n = n/10 ;
    }

   return sum ;

}



int main() {
	
	int t ;
	cin >> t ;
	while(t--){
   long long int n ;
	cin >> n ;
	
	int l = digitsum(n) % 2 ;
	
	long long int x = n+1 ;
	
	if( digitsum(x)% 2  == l ){
	    x++;
	}
	
	
	
	
	cout << x << endl;
	
	}
	
	
}
