#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t, a, b;
	cin >>t;
	while(t--){
	    cin >>a >> b;
	    if ((a+b)%2==0){
	        cout<<"YES"<< endl;
	    }
	    else{
	        cout << "NO" << endl;
	    }
	}
	return 0;
}

