#include<bits/stdc++.h>
using namespace std ;

int main(){
    int t ;
    cin >> t ;
   while(t--){

   int n ;
   cin >> n ;

   string s ;
   cin >> s ;

   string a ;
   string b ;

   sort(s.begin(),s.end());
   for(int i = 0 ; i<n ; i+=2){
      a.push_back(s[i]);
   }
   for(int i = 1 ; i<n ; i+=2 ){
    b.push_back(s[i]);
   }


   if(a == b ){
    cout<<"YES"<<endl;
   }else{
    cout<<"NO"<<endl;
   }













   }
}