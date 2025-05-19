#include <iostream>
using namespace std;
int main() {
	int num;
	cin >> num;    //Reading input from STDIN
	cout << "Input number is " << num << endl;	// Writing output to STDOUT
	string s;
	cin>>s;
	string str_rev;
	for(int i=s.size()-1;i>=0;--i){
		str_rev.push_back(s[i]);
	}
	if(s==str_rev){
		cout<<"YES"<<endl;
	}else{
		cout<<"NO"<<endl;
	}
}
