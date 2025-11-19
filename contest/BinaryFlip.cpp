#include<bits/stdc++.h>
using namespace std ;

int main(){
    int  t;
    cin >> t ;
    while(t--){
        int n ;
        cin >> n ;
        string s ;
        cin >> s ;

        int cnt00 = 0 ; 
        int cnt11 = 0 ;
        for(int i = 0 ; i<n-1 ; i++){
            if(s[i] == s[i+1]){
                if(s[i] == '1') cnt11++;
                else cnt00++;
            }
        }
        cout << max((cnt00 - cnt11 +1)/2 , 0) << endl;
    }
    return 0 ;
}