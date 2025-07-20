#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
int t ;
cin >> t ;
while(t--){
     int n ;
     cin >> n ;
     string s;
     cin >> s ;
     
     bool found_i = false ;
     bool found_y = false ;
     
     for (int i = 0 ; i< n ; i++){
         if ( s[i] == 'I'){
             cout <<"INDIAN"<<endl;
             found_i  = true ;
             break;
         } 
     }
     
   
     for (int i = 0 ; i< n ; i++){
         if ( s[i] == 'Y'){
             cout <<"NOT INDIAN"<<endl;
             found_y = true ;
             break;
         } 
     }
   
     if ( !found_i && !found_y ){
         cout << "NOT SURE" << endl;
    
     }
    
    
}
return 0 ;
}
