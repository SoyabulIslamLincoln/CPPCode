#include <iostream>
#include <cmath>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	while(t--){
	    int x, y,z;
	    cin >> x >>y >>z;
	    if (x%y==0){
	        cout << (x/y)*z << endl;
	    }
	    else if(x%y !=0) {
	        if (x>y){
	            cout << (ceil((double) x/(double) y))*z<< endl;
	        }
	        else{
	            cout << ( y/ x)*z << endl;
	        }
	    }

	}

	return 0;
}

