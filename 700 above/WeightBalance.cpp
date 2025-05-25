#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
int t;
cin>>t;
while(t--){
    int w1,w2,x1,x2,m;
    cin>> w1 >> w2 >> x1 >> x2 >>m ;
    int gain=w2-w1;
    int minpos=x1*m;
    int maxpos=x2*m;
    if(minpos <= gain && gain<= maxpos){
        cout<<1<<endl;
        }else cout<<0<<endl;
}
}
