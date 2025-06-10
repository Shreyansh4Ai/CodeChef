#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
int t ;
cin>> t;
while(t--){
    long long int a,b,c;
    cin>> a >> b >> c;
    
    int one = max((a+b),(a+c));
    int two = max((b+c),(a+b));
    
    cout<< max(one,two)<<endl;
    
    
    
}
return 0;
}
