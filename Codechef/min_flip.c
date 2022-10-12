#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t, n;
	int sum=0;
	cin >> t;
	int a[n];
	while(t--){
	    cin >> n;

	    while(n--){
	        cin >> a[n];
	        sum = sum+a[n];
	    }

	    if (sum==0){
	        cout << 0<< endl;
	    }
	    else if (sum!=0){
	        if (sum%2==0){
	            cout << sum/2 << endl;
	        }
	        else if(sum%2!=0){
	            cout << -1<< endl;
	        }
	    }

	}
	return 0;
}
