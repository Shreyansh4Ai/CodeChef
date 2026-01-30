#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
int t ;
cin >> t ;
while(t--){
   vector<int> p(26);
   for(int i = 0 ; i<26 ; i++){
       cin >> p[i];
   }
   string s ;
   cin >> s ;
   
   vector<bool>presn(26,false) ;
   for(char c : s  ){
       presn[c-'a'] = true ; 
       
   }
    int tcst = 0 ; 
    for(int i = 0 ; i< 26 ; i++){
        if(presn[i] == false){
            tcst += p[i];
        }
    }
    
    cout << tcst << "\n" ; 
}
return 0 ;
}
