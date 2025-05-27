#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
int t;
cin>> t ;
while(t--){
    int  n , a ,b ,c ;
    cin>> n >> a >> b >> c;
   if(min(b,a+c)>= n){
   
       cout<<"YES"<<endl;
   }else {
       cout<<"NO"<<endl;
   }
}
return 0;
}
