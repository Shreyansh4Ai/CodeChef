
#include <bits/stdc++.h>
using namespace std;
using ll=long long;
int main() {
int t ; 
cin>> t ; 
while(t--){
    ll n ; 
    cin >>n;
    
    ll k; 
    cin >> k ;
    
    string s ;
    cin >> s;
    
    if(s[0]=='0'){
        s[0]='1' ;
        k--;
    }
    if(k>0) s.append(k,'0');
    
    cout << s <<endl;
}
return 0 ; 
}
