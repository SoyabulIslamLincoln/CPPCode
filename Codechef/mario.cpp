#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	while(t--){
	    int x;
	    cin >>x;
	    x %= 3;
	    if (x ==0){
	        cout << "Normal"<<endl;
	    }
	    else if(x ==1){
	        cout <<"Huge" << endl;

	    }
	    else{
	        cout << "Small" << endl;
	    }

	}
	return 0;
}

