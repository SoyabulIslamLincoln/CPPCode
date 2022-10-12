#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	int count =0;
	while(t--){
	    int n;
	    cin >> n;
	    int arr[n];
	    for (int i=0; i<n;i++){
	        cin >> arr[i];
	    }
	    for( int i=0;i<n;i++){
	        if (arr[i]<=1000){
	            count ++;
	        }
	    }
	    cout << count<< endl;
	}
	return 0;
}

