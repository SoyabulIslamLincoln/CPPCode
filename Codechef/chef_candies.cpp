#include <iostream>
#include <cmath>
using namespace std;

int main() {
	// your code goes here
	int t, n, x;
	cin >> t;
	while(t--){
	    cin >> n>>x;

	    if (n > x){
	        cout << (n-x)/4 + ((n-x)%4 ? 1:0) << endl;
	    }
	    if (n<=x){
	        cout <<0 <<endl;
	    }
	}
	return 0;
}

