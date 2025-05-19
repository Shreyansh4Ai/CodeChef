class Solution {
  public:  // solution 
    string reverseString(string& s) {
        // code here
       string str_rev;
        for(int i = s.size()-1;i>=0;--i){
            str_rev.push_back(s[i]);
        }
        return  str_rev;
    }
