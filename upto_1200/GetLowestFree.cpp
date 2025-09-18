#include <bits/stdc++.h>
using namespace std;

int main() {
 int t ;
 cin >> t ;
 while(t--){
     
 int a , b , c ;
 cin>> a >> b >> c ;
 
 int l = min(a,b);
 int n = min(l,c) ;
 
 cout << (a+b+c) - n << endl;
 
 
 
 }

}
