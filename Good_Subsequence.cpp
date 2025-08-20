#include<bits/stdc++.h>
using namespace std ;

int main(){
    int t ;
    cin >> t ;
    while(t--){
        int n ;
        cin>> n ;
        vector <int > a(n);
        for(int i = 0 ; i< n ; i++){
            cin >> a[i];
        }
       
        if( n == 1 ) cout << 1 << endl ; 
        else {
            
            int count = 1 ;
            for(int i = 1; i < n ; ++i){
                if( a[i]%2 != a[i-1]%2){
                    count++ ; 
                }
            }
            cout << count << endl;
        }



    }
}