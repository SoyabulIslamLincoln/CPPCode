#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t, x, y, a, b;
	cin >> t;
	while(t--){
	    cin>> x>> y>> a>>b;
	    if (x==a && y==b || x==b &&y==a){
	        cout <<0<<endl;
	    }
	    else if (x==a ||y==b || x==b  || y==a){
	        cout << 1<< endl;
	    }
	    else if(x!=a && y!=b || x!=b && y!=a){
	        cout << 2<< endl;
	    }

	}
	return 0;
}
