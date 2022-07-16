#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t, x, y;

	cin>> t ;
	for (int i=0; i<t; i++){
	    cin>> x>> y;
	    cout << std::min(x, y)<< endl;

	}
	return 0;
}

