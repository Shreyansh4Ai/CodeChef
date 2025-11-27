class Solution {
public:
    int compute(int n, int x, vector<int>& a, vector<int>& b) {
    int cost = 0;
    for(int i = 0 ; i<n ; i++){
        if(a[i] >= x) cost+=b[i];
    } 
     return cost;   
    }
    
};
