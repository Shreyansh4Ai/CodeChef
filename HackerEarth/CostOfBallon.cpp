#include <iostream>
using namespace std;
int main() {
	int t;
	cin>> t ;
	while(t--){
		int green , purple ;
		cin>> green >> purple ;  //bal00n prices
		int n;  // participants 
		cin>> n ;
	  int count =0;
	  int count1=0;;
	  int arr[n][2];
	  
	  for(int i=0;i<n;i++){
		for(int j=0;j<2;j++){
            cin>>arr[i][j];
		}
	
	}

		for(int i=0;i<n;i++){
		for(int j=0;j<1;j++){
          if(arr[i][0]==1){
			count++;
		  }
	
		}
	
	}
		for(int i=0;i<n;i++){
		for(int j=1;j<2;j++){
          if(arr[i][1]==1){
			count1++;
		  }
	
		}
	
	}
    int cost1=green*count + purple*count1;
    int cost2=green*count1 + purple*count ;
    cout<<min(cost1,cost2)<<endl;
	}
return 0;


}
