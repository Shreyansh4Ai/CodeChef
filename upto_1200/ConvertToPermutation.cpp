#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
   int t ;
   cin >> t ;
   while(t--){
       int n ;
       cin >> n ;
       vector<int > a(n);
          for(int i = 0; i<n ;i++){
              cin >> a[i];
          } 
          sort(a.begin(),a.end()) ; 
        int cst = 0 ;
        for(int i = 0 ; i<n ; i++){
            if(a[i] > i+1){
                cst = -1 ;
                break ;
            }
            if(a[i] != i+1 ){
                cst += ((i+1)-a[i]) ;
            }
        }
          
         cout << cst << endl; 
       }
       
   
}
