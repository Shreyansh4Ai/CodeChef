#include <bits/stdc++.h>
using namespace std;
using ll = long long ;

int main() {
	// your code goes here

ll t;
cin >> t ;
while(t--){
    ll n ;
    cin >> n;
    string s ;
    cin >> s ;
    ll cnt = 0 ;
    for(ll i = 0 ; i< n ; i++){
        if (s[i] > s[i+1])
        cnt ++ ;
        
    }
    cout << cnt-1 << endl;
}
}
