#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t, x, y;
	cin >> t;
	while(t--){
	    cin>> x >>y;
	    if (x <=y){
	        cout << y-x<< endl;

	    }
	    else{
	        cout << 0<< endl;
	    }
	}
	return 0;
}

