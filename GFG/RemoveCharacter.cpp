// User function template for c++
class Solution {
  public:
    string removeChars(string str1, string str2) {
        // code here
        unordered_set<char>toRemove(str2.begin(),str2.end());   // this is to store the removeables from str1 
        
        string result; //store the final output 
        
        for(char ch :str1){ // range based for loop  pickss every single character and runs the loop
         if(toRemove.find(ch)==toRemove.end()){ //if ch is not present in the characters to remove 
             result +=ch;              //if ch returns end means not found but if it return something other than element is found and the if condition fails 
             
         }
    }
    return result ;
    }
};



//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        string str1, str2;
        cin >> str1;
        cin >> str2;
        Solution ob;
        cout << ob.removeChars(str1, str2) << endl;

        cout << "~"
             << "\n";
    }
    return 0;
}

// } Driver Code Ends
