#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t, x;
	cin >> t;
	while(t--){
	    cin >> x;
	    if (x >=1 && x <= 4){
	        cout << "YES"<< endl;

	    }
	    else{
	        cout << "NO"<< endl;
	    }
	}
	return 0;
}
