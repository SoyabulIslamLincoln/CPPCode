#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t, x, k;
	cin >> t;
	while(t--){
	    cin >> k >> x;

	    if (x<=k){
	        cout << k-x<< endl;
	    }
	    else{
	        break;
	    }
	}
	return 0;
}

