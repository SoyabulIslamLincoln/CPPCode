#include <iostream>
#include <cmath>
using namespace std;

int main() {
	// your code goes here
	int n, a, b, c;
	int pl1=0, pl2=0, max=0;
	cin >> n;
	while(n--){
	    cin >> a>>b;
	    pl1 = pl1+a;
	    pl2 = pl2+b;
	    int result = abs(pl1-pl2);
	    if (max< result){
	        max=result;
	        if(pl1>pl2){
	            c=1;
	        }
	        else{
	            c=2;
	        }
	    }

	}
	cout << c<< " "<< max;

	return 0;
}
