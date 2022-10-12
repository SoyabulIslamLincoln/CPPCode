#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t, n;
	cin >> t;
	while(t--){
	    cin>> n;
	    int mul=1;
	    for(int i=1;i<n+1;i++){
            mul = mul*i;


	    }
	    cout << mul<< endl;


	}
	return 0;
}
