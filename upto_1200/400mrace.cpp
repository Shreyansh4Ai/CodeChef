#include <bits/stdc++.h>
using namespace std;

int speed(int x){
      int l = 400 / x ;
}
int main() {
    int t;
    cin>>t;
    while(t--){
        int x,y,z;
        cin>>x>>y>>z;
        // your code goes here
        
        if ( x < y && x < z) cout << "ALICE"<< endl;
        else  if ( y < x && y < z) cout << "BOB"<< endl;
         else  if ( z < x && z < x) cout << "CHARLIE"<< endl;
    }

}
