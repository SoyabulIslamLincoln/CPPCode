
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int t, a, b,c;
    cin >> t;
    while(t--){
        cin >> a >> b >>c;

        //cout << max(a, max(b,c)) << endl;
        if (a> b){
            if (a> c){
                cout << a << endl;
            }
            else{
                cout << c<< endl;
            }
        }
        else{
            if (b>c){
                cout << b<< endl;
            }
            else{
                cout << c<< endl;
            }
        }
    }
	// your code goes here
	return 0;
}
