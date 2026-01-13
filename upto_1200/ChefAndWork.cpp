#include <bits/stdc++.h>
using namespace std;

int main() {
    
    int t  ;
    cin>> t ;
    while(t--){
        int n  , k ;
        cin >> n >> k; 
        vector<int> w(n);
        for(int i = 0 ; i<n ; i++){
            cin >> w[i];
            
            
        }
        int trip = 1 ;
        int cwt = 0 ;
        bool poss = true ;
        for(int i = 0 ; i<n ; i++){
            if(w[i] > k) {
                poss = false ;
                break;
            }
            if(cwt + w[i] <= k ){
                cwt +=w[i];
            
            }
            else{
                trip ++ ; 
                cwt = w[i];
            }
        }
        if(poss == true)  cout << trip << endl;
        else cout << -1 << endl;
    }
	
	

}
