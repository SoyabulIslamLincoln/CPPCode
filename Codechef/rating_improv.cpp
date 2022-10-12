#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t, x, y;
	cin >> t;
	while(t--){
	    cin >> x >>y;
	    if (y <  x || y > x+200){
	        cout << "NO"<< endl;
	    }
	    else{
	        cout << "YES" << endl;
	    }
	}
	return 0;
}

