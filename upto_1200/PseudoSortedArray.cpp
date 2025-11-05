#include <bits/stdc++.h>
using namespace std;

int main() {
int t ;
cin >> t;
while(t--){
    int n ;
    cin >> n ;
    vector <long long > a(n);
    for(long long  i = 0 ; i<n ; i++){
        cin >> a[i];
    }
    
    bool swapped = false ;
    for(int i = 0 ; i<=n-2 ;i++){
        if(a[i] > a[i+1] && !swapped) {
        swap(a[i] , a[i+1]) ; 
        swapped = true;
    }
}
    
   if (is_sorted(a.begin() , a.end())){
        cout << "YES"<<endl;
    }else {
        cout <<"NO"<<endl;
    }
    
}
return 0 ;
}
