#include <bits/stdc++.h>
using namespace std;

int main() {
int t ;
cin >> t ;
while(t--){
    int a , b , k ;
    cin >> a >> b >> k ;
    int dist = abs(a-b);
    int ans = (dist + k- 1 )/ k;
    cout << ans << endl;
}

}
