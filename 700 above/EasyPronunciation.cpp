#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
int t ;
cin>> t ;
while(t--){
    int n ;
   cin>> n ;
   
   string s ;
   cin>> s ;
   
   // int check = 0;
   int conso = 0 ;
   for(int i = 0 ; i<n ;i++){
       if(s[i] == 'a'  || s[i] == 'e'  ||s[i] == 'i'  ||s[i] == 'o'  ||s[i] == 'u'){
            conso = 0; // vowel agya so reset 
       }else{
           conso++;
           if(conso>=4){
               break;
           }
       }
   }
   
               if (conso>=4){
                cout <<"NO"<<endl;
            }else {
                cout<<"YES"<<endl;
            }
   
   
}
}
