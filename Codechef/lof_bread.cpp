#include <iostream>
using namespace std;

int main() {
    int t, n, m,k ;
    cin >> t;

    while(t--){
        cin >> n >> m >>k;
        if ( m*k >= n){
            cout << "YES"<< endl;
         }
        if ( m*k < n){
            cout << "No"<< endl;
         }
    }
	// your code goes here
	return 0;
}

