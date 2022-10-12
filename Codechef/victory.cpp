#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int r, o, c;
	cin>> r>>o>>c;

	int over = 20-o;
	over= over*6;
	int total = c+ over*6;
	if (total> r){
	    cout <<"YES"<< endl;
	}
	else{
	    cout << "NO"<< endl;
	}
	return 0;
}
