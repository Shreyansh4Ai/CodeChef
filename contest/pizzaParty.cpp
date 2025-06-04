#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
int a ,b ;
cin>> a >> b ;
int boys = (a+1)*4 ;
int girls = b*3 ;

float total = (boys+girls);
int x = ceil(total/8) ;

cout<< x <<endl;
}
