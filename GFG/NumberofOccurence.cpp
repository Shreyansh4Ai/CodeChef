class Solution {
  public:
    int countFreq(vector<int>& arr, int target) {
        // code here
         long int count=0;
        for(long int i=0;i<arr.size() ;i++){
            if(arr[i]==target){
                count++;
            }
        }
    return count;    
    }
    
};
