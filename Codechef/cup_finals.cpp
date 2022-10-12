#include <iostream>
#include <cstdlib>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	while(t--){
	    int x, y, d;
	    cin >> x >>y>> d;
	    if (abs(x-y)<=d){
	        cout << "YES"<< endl;
	    }
	    else if (abs(x-y)>d){

	        cout<<"NO"<<endl;
	    }

	}
	return 0;
}
