#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t,n;
	cin >> t;
	while(t--){
	    cin >> n;
	    if (abs(n)<=10){
	        cout << "Thanks for helping Chef!"<< endl;
	    }
	    else if (abs(n)>10){
	        cout <<"-1"<< endl;
	    }
	}
	return 0;
}
