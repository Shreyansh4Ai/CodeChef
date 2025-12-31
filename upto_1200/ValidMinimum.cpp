#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
int t ;
cin >> t ;
while(t--){
    int a[3];
    cin >> a[0] >> a[1] >> a[2];
    sort(a,a+3);
    if(a[0] == a[1]) cout <<"YES"<<endl;
    else cout <<"NO"<<endl;
    
}
}
