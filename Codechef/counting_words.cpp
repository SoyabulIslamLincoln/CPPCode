#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t, n, m;
	cin >> t;
	while(t--){
	    cin>> n >>m;
	    int sum=0;
	    while(n--){
	        sum = sum+m;
	    }
	    cout << sum<< endl;
	}
	return 0;
}

