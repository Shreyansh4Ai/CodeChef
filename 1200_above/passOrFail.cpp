#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
int t ;
cin>> t ;
while(t--){
 
 int n , x , p ;
 cin>> n >> x >> p ;  // n = total  , x = correct , p = least to pass

 int corr = x*3;
 int score = corr - (n-x);
 
 int total = score ;
 
 if(total >= p){
     cout <<"PASS"<<endl;
 }else {
     cout <<"FAIL"<<endl;
 }
 
 
    
}


}
