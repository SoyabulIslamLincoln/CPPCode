#include <iostream>

using namespace std;

class Solution {
public:
    int countOdds(int low, int high) {


        int n = (high- low)/2;
        if (high % 2 !=0 || low %2 !=0) {
            n+=1;

        }
        return n;
    }

};
int main(){
        int low=7, high= 20;
        int odds = countOdds(low, high);

        cout << "Total Odd numbers" << odds << endl;
        return 0;
    }
