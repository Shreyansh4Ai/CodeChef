#include <bits/stdc++.h>
using namespace std;

void func(){
     int n ;
   cin >> n ;

   vector<int> group_size(n+1 , 0);
   int p[n];
   
   for(int i = 0 ; i< n ; i++){
       cin >> p[i];
       group_size[p[i]]++ ;
       
   }
   
   for(int i =1; i<= n ; i++){
       if(group_size[i]%i != 0){
           cout <<"NO"<<endl;
        return ;
       }
       
   }
   cout <<"YES"<<endl;
}



int main() {


int t ;
cin >> t ;
while(t--){
   func() ;
   
}

}
