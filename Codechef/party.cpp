#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t, n, x, k;
	cin >> t;
	while(t--){
	    cin >> n >> x>>k;
	    if (k>= (n*x)){
	        cout << "YES" << endl;

	    }
	    if (k<  (n*x)){
	        cout << "NO" << endl;

	    }
	}
	return 0;
}
