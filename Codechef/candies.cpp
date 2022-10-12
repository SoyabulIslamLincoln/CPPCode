#include <iostream>
#include <cmath>
using namespace std;

int main() {
	// your code goes here
	int t, n, k, m;
	cin >> t;
	while(t--){
	    cin >> n >>k >>m;
	    double l= k*m;
	    cout << ceil((double)n/l)<<endl;
	}
	return 0;
}

