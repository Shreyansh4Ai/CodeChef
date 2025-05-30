#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
int t ;
cin>> t ;
while(t--){
    long int n ;
    cin>> n ;
    long int sum =0;
    for(int i=0;i<=n;i++){
        sum=sum+i;
    }
    if(sum%2==0){
        cout<<n<<endl;
    }else cout<<n-1<<endl;
}
return 0;
}
