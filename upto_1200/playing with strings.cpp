#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
int t ;
cin >> t ;
while(t--){
    int n ;
    cin >> n ;
    string s , r ;
    cin >> s >> r ;
    
    int one = count(s.begin(),s.end() , '1');
    int zero = count(r.begin() ,r.end() , '1');
    
    if(one == zero) cout << "YES"<< endl;
    else cout <<"NO"<<endl;
}
}
