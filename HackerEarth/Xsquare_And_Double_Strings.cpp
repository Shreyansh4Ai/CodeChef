#include <iostream>
using namespace std;
int main() {
	int num;
	cin >> num;    //Reading input from STDIN
	cout << "Input number is " << num << endl;	// Writing output to STDOUT

	int t ;

	cin >> t ;
    while(t--){

	string s ;
	cin >> s ;
    if(s.size() < 2 ) {
    cout << "NO"<< endl;
    }
	else if(s.size() == 2) {
		if(s[0] == s[1]) cout << "YES" << endl;
	}
    else{
		int n =  s.size() / 2 ;
	    
        string a = s.substr(0,n);
        string b = s.substr(n,n);

        
		cout << a << endl;
		cout << b << endl;

	}






    }

	
}