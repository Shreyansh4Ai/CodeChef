#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
int t ;
cin>>t;
while(t--){
    int x ;
    cin>> x ;
    if(x>=1 && x<100) cout<<"Easy"<<endl;
    if(x>=100 && x<200) cout<<"Medium"<<endl;
    if(x>=200 && x<=300) cout<<"Hard"<<endl;
}
return 0;
}
