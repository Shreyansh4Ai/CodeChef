#include <bits/stdc++.h>
using namespace std;

int main() {
    int t ;
    cin >> t ;
    while(t--){
        int n , m ;
        cin >> n >> m ; //  no of total match to play   //  the matches already played 
        string s ;
        cin >> s ;
         // 1 alice // 0 bob
         int acnt = 0 ;
         int bcnt = 0 ;
         for (int i = 0 ; i< m ; i++){
             if (s[i] ==  '0' ) bcnt++ ; 
             else acnt++ ;
         }

        int remmatch = n - m ;
        if (n % 2 !=0 ){
            cout << "NO"<< endl;
        }else {
            if (acnt > n /2 || bcnt > n/2){
                cout << "NO"<< endl;
            }else {
                cout <<"Yes"<< endl;
            }
        }
    }

}
