
#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t, x;
	cin >> t;
	while(t--){
	    cin >> x;
	    if (x<=30){
	        cout << "NO"<< endl;
	    }
	    if (x>30){
	        cout << "YES"<< endl;
	    }
	}
	return 0;
}
