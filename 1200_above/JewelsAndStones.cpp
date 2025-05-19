#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
int t ;
cin>> t ;
while(t--){
    string j ;
    cin>> j ;
    string s;
    cin>>s ;
    int count =0 ;
    unordered_set<char>jewelset(j.begin(),j.end());
    for(char ch :s ){
        if(jewelset.find(ch)!=jewelset.end()){
            count++;
        }
    }
    cout<<count<<endl;
}
return 0 ;
}
