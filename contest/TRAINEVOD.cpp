#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
int t;
cin>> t ;
while(t--){
    int n;
    cin>> n ;
    int arr[n];
    for(int i=1;i<=n;i++){
        cin>> arr[i];
    }
    int odd=0;
    int even =0 ;
    for(int i =1 ;i<=n ;i++){
        if (i%2==0){
            even = even+arr[i];
        }else {
            odd = odd+arr[i];
        }
    }
    cout<<max(even,odd)<<endl;
}
return 0;
}
