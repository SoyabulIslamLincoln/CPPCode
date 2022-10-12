#include <iostream>
#include <cmath>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	while(t--){
	    int n, m;
	    cin >> n >>m;
	    if (m>=n){
	        cout << n<< endl;
	    }
	    else if (m<n){
	        int x = abs(n-m);
	        int y = n+ max(0, x);
	        cout << y << endl;

	    }

	    //Therefore, minimum number of extra shoes that Chef will have to buy to ensure that he is able to gift a pair of shoes to each of his NN friends is given by following equation

//Minimum number of shoes Chef needs to buy are = N + max(0, N-M)=N+max(0,N−M)
	}
	return 0;
}

