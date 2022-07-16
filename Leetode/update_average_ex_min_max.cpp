#include <iostream>
#include <bits/stdc++.h>
#include <iomanip>

using namespace std;
double average(vector<int>& salary) {
    int n= salary.size();
    int sum =0;
    int mx= salary[0];
    int mn = salary[0];
    for(int i=0; i< n; i++){

        if(salary[i]< mn){
            mn = salary[i];
        }
        if (salary[i]> mx){
            mx = salary[i];
        }
        sum = sum+ salary[i];

    }


    double answer = (sum - mx -mn)/((n-2)*1.0);
    return answer;

}
int main(){
    vector<int> arr={12000, 654875, 121, 1821, 172, 16253};
    std :: cout << std:: setprecision(5)<< std::fixed;

    std::cout << average(arr)<< std::endl;
    return 0;
}
