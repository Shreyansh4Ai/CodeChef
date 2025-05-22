#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
int t;
cin>>t ;
while(t--){
    float a ,  x , b , y;
    cin>> a >> x >> b >> y ;
    float alice=a/x;
    float bob=b/y;
    if(alice>bob) cout<<"ALICE"<<endl;
    else if(alice<bob) cout<<"BOB"<<endl;
    else if(alice==bob) cout<<"EQUAL"<<endl;
}
return 0;
}
