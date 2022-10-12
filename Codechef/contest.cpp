#include <iostream>
#include <cstring>
using namespace std;

int main() {
	// your code goes here
	int t, n;
	string b;
	cin>> t;
	while(t--){
	    cin>> n;
	    int c=0, p=0;
	    while(n--){
	        cin >> b;
	        if (b=="START38"){
	            c++;
	        }
	        else if(b=="LTIME108"){
	            p++;
	        }
	    }
	    cout<< c<< " "<<p<< endl;
	}
	return 0;
}
