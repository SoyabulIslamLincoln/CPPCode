#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t, n;
	cin >> t;
	while(t--){
	    cin >> n;

	    int total = n*50;
	    total =total -(total *0.7);
	    cout << total<<endl;

	}
	return 0;
}

