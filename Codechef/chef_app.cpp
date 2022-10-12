//# cook your code here
#include <iostream>
#include <cmath>
using namespace std;
int main(){
    int t, x, y, z, s;
    cin >> t;
    while(t--){
        cin >> s >> x >> y>>z;

        int a = z- (s-(x+y));

        if (a<=0){
            cout << 0 << endl;
        }
        else if (a <= max(x, y)){
            cout << 1 << endl;
        }
        else {
            cout << 2<< endl;
        }
    }



    return 0;
}

