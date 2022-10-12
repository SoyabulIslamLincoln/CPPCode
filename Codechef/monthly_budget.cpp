#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t, x, y;
	cin >> t;
	while(t--){
	    cin >> x >>y;
	    if (y*30 <=x){
	        cout << "YES"<< endl;
	    }
	    if (y*30 > x){
	        cout << "NO"<< endl;
	    }
	}
	return 0;
}

