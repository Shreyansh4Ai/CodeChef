#include<bits/stdc++.h>
using namespace std ;
using ll =long long ;

int main(){
    ll t ;
    cin>> t ;
    while(t--){
        ll n ;
        cin >> n ;
        vector <ll>a(n+1);
        ll p = 0 ;
        ll l = 0 ;
        for(ll i =1 ; i<=n ; i++ ){
            cin >> a[i];
            if(a[i] >0 ) p++;
            else if(a[i] < 0) l++;
        }
        ll ans = ( p*(p-1) / 2 )+ (l*(l-1) / 2);
        
        cout << ans << endl;
        


    }
}