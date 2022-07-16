#include <iostream>
#include <bits/stdc++.h>

using namespace std;

double average(vector<int>& salary) {
    int n= salary.size();
    int sum =0;
    int mx= INT_MAX;
    int mn = INT_MIN;
    for(int i=0; i< n; i++){
        sum = sum + salary[i];
        mx = max(mx, salary[i]);
        mn = min(mn, salary[i]);

    }


    double answer = (sum - mx -mn)/((n-2)*1.0000);
    return answer;

}

int avg(){
    vector<int> arr={12000, 654875, 121, 1821, 172, 16253};
    cout << average(arr)<< endl;
    return 0;
}
