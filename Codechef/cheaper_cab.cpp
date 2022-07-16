#include <iostream>
using namespace std;

int main() {
    int t, x, y;
    cin >> t;
    while(t--){
        cin >> x>>y;
        if (x<y){
            cout << "FIRST"<< endl;
        }
        if (x==y){
            cout << "ANY"<< endl;
        }
        if (x>y){
            cout << "SECOND"<< endl;
        }
    }
	// your code goes here
	return 0;
}

