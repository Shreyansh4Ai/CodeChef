#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
     
     int t ;
     cin >> t ;
     while(t--){
         int n ,k ;
         cin >> n >> k ;
         vector<int>a(n);
         for(int i = 0 ; i<n ; i++){
             cin >> a[i];
             
         }
         
         vector<int>freq(n+1 , 0);
             for(int x : a ){
             freq[x]++ ;
         }
         
         vector<int>available ;
         int ans = 0 ;
         
         
         for(int i = 1 ; i<=n ; i++){
             if(freq[i] > 0){
                 ans++;
                 if(a[0] != i)
                 available.push_back(freq[i]) ; 
                 
               
             }
         }
         
         sort(available.begin() , available.end()) ; 
         
         for(int x : available )
         {
             if(x<= k ){
             ans-- ; 
             k -=x ;
         }
         }
         cout << ans << endl;
         
         
     }


}
