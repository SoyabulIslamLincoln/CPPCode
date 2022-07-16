#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int day =5, test_case;
	int distance[test_case];
	cin >> test_case;
	for (int i=0; i<=test_case; i++){
	    cin >> distance[i];


	}
	int n = sizeof(distance);
	for (int i=0; i<n; i++){
        cout << distance[i]*2*day;
	}

	return 0;
}
