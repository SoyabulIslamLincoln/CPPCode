#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t, x, y;

	cin>> t ;
	for (int i=0; i<t; i++){
	    cin>> x>> y;
	    if (x==y){
	        cout << x<< endl;
	    }
	    if (x<y){
	        cout << x<< endl;
	    }
	    if (x>y){
	        cout << y << endl;
	    }

	}
	return 0;
}

