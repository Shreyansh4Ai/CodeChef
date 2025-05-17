#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
int t ;
cin>> t ;
while(t--){
    int n , a  ,b;
    cin>> n >> a >> b;
    int even=0;
    int odd =0 ;
   for(int i=1 ;i<=n ;i++){
       
    if(i%2==0){
        even++;
    }else  {
        odd++; 
    }
   
   }
  int total= even*a + (odd*b);
  cout<< total<<endl; 
}
return 0;
}
