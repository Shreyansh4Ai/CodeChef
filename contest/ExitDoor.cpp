#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; ++i) {
            cin >> a[i];
        }

        int ans = 0 ;
        
        for(int i = 0 ; i<n ; i++){
            int left = 0 , right = 0 ;
            
            for(int j = 0 ; j<i ; j++){
                if(a[j] < a[i])left++;
            }
            for(int j= i+1; j<n ; j++){
                if(a[j]<a[i]) right++;
            }
            ans +=min(left,right);
        }
        
           cout << ans << endl;
        }
     

}