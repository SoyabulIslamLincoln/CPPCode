#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t, a,x,b,y;
	cin >> t;
	while(t--){
	    cin >> a>>x>>b>>y;
	    float s = a/x;
	    float p = b/y;
	    if (s>p){
	        cout << "Alice"<< endl;
	    }
	    else if (s>p){
	        cout << "Bob"<< endl;
	    }
	    else if (s==p){
	        cout << "Equal"<< endl;
	    }
	}
	return 0;
}
