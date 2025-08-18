#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
int t ;
cin >> t ;
while(t--){
    
    int n ;
    cin >> n ;
    vector<int>a(n);
    for(int i = 0 ; i< n ;i++){
        cin >> a[i];
    }
    
    int maxu = 0;
    int indexu = 0 ;
    for(int i = 0  ; i< n ;i++){
        if(a[i] > maxu){
            maxu = a[i];
            indexu = i ;
        }
    }
    
    cout<<indexu+1 << endl;
    
}
    
    
    
}
