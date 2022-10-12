#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t, n,x,p;
	cin>> t;
	while(t--){
	    cin >> n>>x>>p;
	    int mark = (x*3 + (n-x)*(-1));
	    if (mark>=p){
	        cout <<"PASS" << endl;
	    }
	    else if (mark <p){
	        cout << "FAIL"<< endl;
	    }
	}
	return 0;
}
