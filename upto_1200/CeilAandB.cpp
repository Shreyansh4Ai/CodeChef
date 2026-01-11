#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
int a , b ;
cin >> a >> b ;

int ans = a-b ;
int lastdigit = ans % 10 ;
if(lastdigit == 9){
    ans-=1 ;
}else {
    ans +=1 ;
}

cout << ans << endl;
}
