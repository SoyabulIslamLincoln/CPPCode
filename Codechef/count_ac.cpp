#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t, p;
	cin >> t;
	while(t--){
	    cin >>p;
	     int n= p/100;
	     n =n+(p-(100*n))/1;
	     if(n<=10){
	         cout << n<< endl;
	     }
	     else{
	         cout << "-1"<< endl;
	     }
	}
	return 0;
}
