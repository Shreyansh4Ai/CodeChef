#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
  int t;
  cin>>t ;
  while(t--){
      float s,a,b,c;
      cin>>s >> a >> b >> c ;
      float final=s + s*(c/100) ;
      if(final>=a && final<=b){
          cout<<"YES"<<endl;
      }else {
          cout<<"NO"<<endl;
      }
  }
}
