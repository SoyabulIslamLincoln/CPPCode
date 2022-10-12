#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t, n;

	cin >> t;

	while(t--){
	    cin >> n;
	    int sum=0;
	    int a[n];

	    for(int i=0; i<n; i++){
	        cin >> a[i];
	        sum = sum+a[i];
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
