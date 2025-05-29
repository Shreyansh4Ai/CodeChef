#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
int t;
cin>> t ;
while(t--){
    int n ;
    cin>> n ;
    int a[n];
    for(int i =0 ;i<n;i++){
        cin>> a[i];
    }
    int sum =0;
    for (int i=0 ;i<n;i++ ){
        sum=sum+a[i];
        
    }
    int origsum=sum;
    int count =0;
    if (sum%3==0){
        cout<<"YES"<<endl;
    }else {
        for(int i=0;i<n;i++){
            sum=origsum-a[i];
            if (sum%3==0 && sum>0 || a[i]%3==0 && sum>0){
                count++;
            }
            
        }
        if(count>0) cout<<"YES"<<endl;
        else cout <<"NO"<<endl;
    }
    
    
}
return 0 ;
}
