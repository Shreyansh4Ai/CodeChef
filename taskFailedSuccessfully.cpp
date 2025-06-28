#include<bits/stdc++.h>
using namespace std ;

int main(){
    int n ;
    cin>> n ;
    
    int arr[n][2] ;
    
    for(int i =0 ; i<n ;i++){
        for(int j = 0 ; j<2; j++){ 
            
            cin>> arr[i][j];
            
        }
    }
    int t =0 ;
    for(int i = 0 ; i<n ; i++){
      //  for(int j = 0 ; j<2 ;j++){
            if(arr[i][0] < arr[i][1]){
                t++ ;
          //  }
        }
    }
    
    cout<< t << endl;
    
}
