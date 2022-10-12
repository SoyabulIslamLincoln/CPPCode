#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t, a,x,b,y;
	cin >> t;
	while(t--){
	    cin >> a>>x>>b>>y;
	    int s = a/x;
	    int p = b/y;
	    cout << s;
	}
	return 0;
}
