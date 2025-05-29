#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
int r , b , p , q ;
cin>> r >> b >> p >> q;
int c=r*p;
int c2=b*q;
cout<<max(c,c2)<<endl;
return 0;
}
