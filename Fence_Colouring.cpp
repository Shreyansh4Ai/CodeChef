#include<bits/stdc++.h>
using namespace std ;
using ll = long long ;
int main(){
    int t ;
    cin >> t ;
    while(t--){
       ll n;
        cin >> n;
        map <ll,ll> m;
        ll f = 0;
        for(ll i = 0 ; i < n ; i++) 
        {
            ll temp;
            cin >> temp;
            m[temp]++;
            f = max(f, m[temp]);
        }

        cout << min(n-f+1, n - m[1]) << endl;
        

    }
}