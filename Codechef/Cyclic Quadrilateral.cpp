#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t, a, b, c, d;
	cin >> t;
	while(t--){
	    cin >> a >>b>>c>>d;
	    if (a+c!=180 ||b+d!=180 ){
	        cout << "NO"<< endl;
	    }
	    else if(a+c==180 && b+d==180){
	        cout <<"yes"<< endl;
	    }

	}
	return 0;
}
