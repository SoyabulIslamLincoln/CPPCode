
#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	while(t--){
	    int a, b, c;
	    cin >> a>>b>>c;
	    if (max(a,c)<=b){
	        cout << "Yes"<<endl;
	    }
	    else{
	        cout<< "No"<<endl;
	    }
	}


	return 0;
}
