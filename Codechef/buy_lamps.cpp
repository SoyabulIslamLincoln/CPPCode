#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t, n,k,x,y;
	cin >>t;
	while(t--){
	    cin >>n>>k>>x>>y;
	    //int total = k*x + (n-k)*y;

	    if (x<=y){
	        int total = n*x;
	        cout << total<< endl;
	    }
	    else if (x>y){
	        int total = k*x + (n-k)*y;
	        cout << total<< endl;
	    }

	}
	return 0;
}
