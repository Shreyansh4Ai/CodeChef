#include<bits/stdc++.h>
using namespace std ;
using ll = long long ;
                 //sahi krna h 
int main(){
    int  t;
    cin >> t ;
    while(t--){
        ll n ;
        cin >> n ;
        string s ;
        cin >> s ;
      
        ll cnt00 = 0 ;
        ll cnt11 = 0 ;
    for(int  i = 0 ; i<n-1 ; i+=2){
        if(s[i] == '0' && s[i+1] == '0') cnt00++ ;
        else if(s[i] == '1'  && s[i+1] == 1) cnt11++;

    }

    if(cnt00 >= cnt11){
        cout << cnt00 - cnt11 << endl;
    }else {
           cout << 0 << endl; 
    }

    }
}