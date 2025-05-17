#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
int t ;
cin>> t ;
while(t--){
    int x, n ;
    cin>> x >> n ;
    int p = n/100;
    int count =0;
    if(p<x){
        cout<< 0 << endl;
    }else {
        for(int i=0;i<n ; i=i+100){
            count++;
        }
        cout<<count-x<<endl;
    }
    
}
return 0;
}
