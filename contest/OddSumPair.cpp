class Solution {
public:
    string checkOddPairs(int a, int b, int c) {
        
        if((a+b)% 2 !=0  || (b+c)%2 !=0  || (a+c)%2 !=0){
              return "YES" ; 
        }
        else return "NO" ;
        
    }
};
