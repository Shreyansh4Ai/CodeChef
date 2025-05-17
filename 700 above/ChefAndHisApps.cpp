#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int t ;
    cin>> t ;
    while(t--){
        int s , x , y ,z ;
        cin>> s >> x >> y >> z ;

  
        int free_space = s - (x + y);

        if (free_space >= z) {
            cout << 0 << endl;
        } else {
            if (s - min(x, y) >= z) {
                cout << 1 << endl;
            } else {
                cout << 2 << endl;
            }
        }
    }
    return 0;
}
