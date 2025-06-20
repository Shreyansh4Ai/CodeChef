#include <bits/stdc++.h>
using namespace std;

int main() {
    int t ;
    cin>> t ;
    while(t--){
        int xa , xb , xc ; 
        cin >> xa >> xb >> xc ; 
        
        
         if (xa >= 51) cout << "A" <<endl;
        else if ( xb >= 51) cout <<"B" << endl;
        else if(xc  >= 51) cout << "C" << endl;
        else if (xa == xb || xb == xc || xa == xc) cout << "NOTA"<< endl;
        else cout <<"NOTA"<< endl; 
    }
    
    
}
