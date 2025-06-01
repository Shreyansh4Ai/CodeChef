#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
int t;
cin>> t ;
while(t--){
    long long int n , s ;
    cin>> n >> s ;
    
    int t2=n;
    int t1=abs(s-n);
     int ans = t2-t1;
    cout<<ans<<endl; 
    
}
return 0;
}
