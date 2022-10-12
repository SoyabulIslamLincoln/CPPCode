#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t, n, x, ans;
	cin>> t;
	while(t--){
	    cin >> n;
	    for (int i=0; i<n;i++){
	        cin >> x;
	        if(x!=0){
	            ans=i;
	        }
	    }
	    cout << ans << endl;
	}

	return 0;
}
