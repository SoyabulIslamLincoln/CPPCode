#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t, x, y;
	cin >> t;
	while(t--){
	    cin >> x >> y;
	    if (x*3 <= y*2){
	        cout << x*3<< endl;
	    }
	    if (x*3 > y*2){
	        cout << y*2 << endl;
	    }
	}
	return 0;
}
