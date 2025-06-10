#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
int t ;
cin>> t;
while(t--){
    int  x , y ,d ;
    cin>> x >> y >> d ;
    if(x>=y){
        int out = x-y;
        if(out <= d){
            cout << "YES"<<endl;
        }else {
            cout<<"NO"<<endl;
        
        }
    }else if (y>x){
        int out = y-x;
        if(out <= d){
            cout <<"YES"<<endl;
        }else {
            cout<<"NO"<<endl;
        }
    }
}
return 0;
}
