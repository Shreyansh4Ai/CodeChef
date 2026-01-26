#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
 int t ;
 cin >> t ;
 while(t--){
     string s ;
     cin >>  s ;
     int cst = 0 ;
     sort(s.begin() , s.end());
     for(int i = 0 ; i < s.size() ; i++){
        if(s[i] == s[i+1]) {
            cst++;
            i +=1 ;
        }
        else {
            cst++;
        }
     }
     cout << cst << endl;
 }
}
