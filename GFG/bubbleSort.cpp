class Solution {
  public:
    // Function to sort the array using bubble sort algorithm.
    void bubbleSort(vector<int>& arr) {
        // Your code here
        for(int i = arr.size()-2;i>=0;i--){
            bool swapped = 0;
            for(int j =0 ;j<=i ;j++){
                if (arr[j]>arr[j+1]){
                    swap(arr[j],arr[j+1]);
                    swapped = 1;
                }
            }
            if(swapped ==0){
                break;
            }
            
        }
      //for (int i=0 ; i<arr.size() ; i++){
        //  cout<<arr[i]<<" ";
     // }  
    }
};
