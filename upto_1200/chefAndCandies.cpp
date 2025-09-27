#include <bits/stdc++.h>
using namespace std;

int main() {
    
    int t ;
    cin >>t ;
    while(t--){
        int n  , x ;
        cin >> n >> x ;
        int c = max(0 , n-x);
        int ans = c/4 + (c%4 ? 1 : 0 ) ;
        cout << ans << endl;
    }

}
