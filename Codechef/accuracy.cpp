#include <iostream>
#include <cmath>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	while(t--){
	    int x;
	    cin >> x;
	    //int correct = [(math.ceil(x/3))*3];
	    //int incorrect = x - correct;
	    cout <<x - ((ceil(x/3))*3) << endl;
	}
	return 0;
}
