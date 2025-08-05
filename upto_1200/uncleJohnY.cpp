#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
int t ;
cin >> t ;
while(t--){
    int n ;
    cin >> n ;
    
    vector<int> a(n);
    for(int i = 0 ;i < n; i++){
        cin >>  a[i];
    }
    
    int k ;
    cin >> k ;
    int key = a[k-1];
    sort(a.begin(),a.end());
    int cnt = 0 ;
    for(int i = 0 ; i <n ; i++){
        if (a[i] == key){
         cnt = i ;
         break;
    }
    }
    
    cout << cnt+1 << endl;
    
    
    
}
return 0 ;
}
