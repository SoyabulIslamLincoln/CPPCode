#include <iostream>
#include <conio.h>
#include <bits/stdc++.h>
using namespace std;


int main() {
    int shape;
    cout<< "Enter array size"<< endl;

    cin >> shape;

    int arr[shape];

    cout << "Enter array values" << endl;

    for (int i=0; i< shape ; i++){
        cin >> arr[i];

    }

    for (int j=0; j< shape; j++){
       cout << arr[j]<< " ";
    }
    cout << endl;
//MAX element

    cout << *max_element(arr, arr+shape);
    cout << endl;
    // Minimum element
    cout << *min_element(arr, arr+shape);
    cout << endl;


    //exclude minimum and maximum

    int max_e = *max_element(arr, arr+shape);

    int min_e = *min_element(arr, arr+shape);

    for (int i=0; i< shape; i++){
        if (arr[i]==max_e){
            for (int j=i; j<(shape -1); j++){
                arr[j]= arr[j+1];

            }
            break;
        }
    }
    int n= sizeof(arr)/sizeof(arr[0]);

    for (int j=0; j< n -1; j++){
       cout << arr[j]<< " ";
    }
    cout <<endl;


}
