#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int x, a, b;
	cin >> x >> a>>b;
	if (x >= (a+b)){
	    cout << "YES"<<endl;
	}
	if (x< (a+b)){
	    cout << "NO"<< endl;
	}
	return 0;
}

