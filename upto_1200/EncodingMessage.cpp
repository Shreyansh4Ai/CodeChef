#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here

int  t ;
cin>> t ;
while(t--){
    int n ;
    cin>> n ;
    
    string s ;
    cin>> s ;
    
    if (n % 2 != 0) {
        for (int i = 0 ; i < n -2 ; i+=2){
            swap(s[i] , s[i+1]);
        }
        
        for (int i =0 ; i<n ;i++){
            s[i] = 'z' - (s[i] - 'a') ;
        }
        
        cout << s <<  endl;
    }else {
        
         for (int i = 0 ; i < n - 1 ; i+=2 ){
            swap(s[i] , s[i+1]);
        }
        
        for (int i =0 ; i<n ;i++){
            s[i] = 'z' - (s[i] - 'a') ;
        }
        
        cout << s <<  endl;
        
        
    }
}
}
